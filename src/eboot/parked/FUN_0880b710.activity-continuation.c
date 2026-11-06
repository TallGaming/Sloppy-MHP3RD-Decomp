/*
 * Purpose hypothesis: allocate a chunk from the process heap's dlmalloc-style
 * small bins, unsorted bin, bitmap-indexed regular bins, or top chunk.
 *
 * The control flow agrees with the public dlmalloc 2.6.6 mALLOc loop after
 * its fast-bin path is disabled: requests become 16-byte aligned chunks,
 * recently freed chunks are binned lazily, and the best available chunk is
 * split when its remainder is usable. Field names and the system-growth
 * helper are hypotheses; the reference's allocator-state declaration and
 * inlined growth implementation have not yet been recovered.
 */
typedef unsigned int u32;
typedef struct Chunk Chunk;
struct Chunk { u32 previous_size; u32 size_flags; Chunk *next; Chunk *prev; };
typedef struct AllocatorState {
    u32 max_fast_or_flags;
    u32 binmap;
    Chunk *top;
    Chunk *last_remainder;
    Chunk bin_storage[128];
} AllocatorState;

extern AllocatorState D_0897c04c;
void FUN_0880c540(void *allocator);
void FUN_0880c57c(void *allocator);
void *FUN_0880aacc(void *allocator, u32 normalized_size);

#define CHUNK_SIZE(chunk) ((chunk)->size_flags & ~3U)
#define PREV_IN_USE 1U
#define MIN_CHUNK_SIZE 16U
#define SMALL_REQUEST_LIMIT 504U
#define SMALL_BIN_INDEX(size) ((size) >> 3)
#define BIN_AT(index) ((Chunk *)((char *)&D_0897c04c + ((index) << 3)))
#define UNSORTED_BIN BIN_AT(1)

static void unlink_chunk(Chunk *chunk)
{
    Chunk *previous = chunk->prev;
    Chunk *next = chunk->next;
    previous->next = next;
    next->prev = previous;
}

static void put_unsorted(Chunk *chunk)
{
    Chunk *bin = UNSORTED_BIN;
    Chunk *first = bin->next;
    chunk->prev = bin;
    chunk->next = first;
    first->prev = chunk;
    bin->next = chunk;
}

static void mark_chunk_in_use(Chunk *chunk, u32 size)
{
    Chunk *next = (Chunk *)((char *)chunk + size);
    next->size_flags |= PREV_IN_USE;
}

static void split_chunk(Chunk *chunk, u32 size, u32 remainder_size)
{
    Chunk *remainder = (Chunk *)((char *)chunk + size);
    chunk->size_flags = size | PREV_IN_USE;
    remainder->size_flags = remainder_size | PREV_IN_USE;
    ((u32 *)((char *)remainder + remainder_size))[0] = remainder_size;
    put_unsorted(remainder);
}

static u32 large_bin_index(u32 size)
{
    u32 high = size >> 9;
    if (high == 0) return 56 + (size >> 6);
    if (high < 5) return 91 + high;
    if (high < 21) return 110 + (size >> 12);
    if (high < 85) return 119 + (size >> 15);
    if (high < 341) return 124 + (size >> 18);
    return 126;
}

void *FUN_0880b710(void *allocator, u32 request)
{
    u32 size = request + 19;
    u32 index;
    u32 map;
    u32 bit;
    Chunk *bin;
    Chunk *chunk;
    Chunk *remainder;

    if (size < 31)
        size = MIN_CHUNK_SIZE;
    else
        size &= ~15U;
    if (size < request)
        return 0;

    FUN_0880c540(allocator);
    if (size < SMALL_REQUEST_LIMIT) {
        index = SMALL_BIN_INDEX(size);
        bin = BIN_AT(index);
        chunk = bin->prev;
        if (chunk != bin) {
            unlink_chunk(chunk);
            mark_chunk_in_use(chunk, size);
            FUN_0880c57c(allocator);
            return (char *)chunk + 8;
        }
    } else
        index = large_bin_index(size);

    /* Process recently freed chunks before performing best-fit search. */
    bin = UNSORTED_BIN;
    while ((chunk = bin->prev) != bin) {
        u32 chunk_size = CHUNK_SIZE(chunk);
        if (size < SMALL_REQUEST_LIMIT && chunk->prev == bin &&
            chunk == D_0897c04c.last_remainder && chunk_size > size + MIN_CHUNK_SIZE) {
            u32 remainder_size = chunk_size - size;
            remainder = (Chunk *)((char *)chunk + size);
            bin->next = remainder; bin->prev = remainder;
            remainder->next = bin; remainder->prev = bin;
            D_0897c04c.last_remainder = remainder;
            chunk->size_flags = size | PREV_IN_USE;
            remainder->size_flags = remainder_size | PREV_IN_USE;
            ((u32 *)((char *)remainder + remainder_size))[0] = remainder_size;
            FUN_0880c57c(allocator);
            return (char *)chunk + 8;
        }
        unlink_chunk(chunk);
        if (chunk_size == size) {
            mark_chunk_in_use(chunk, chunk_size);
            FUN_0880c57c(allocator);
            return (char *)chunk + 8;
        }
        if (chunk_size < SMALL_REQUEST_LIMIT) index = SMALL_BIN_INDEX(chunk_size);
        else index = large_bin_index(chunk_size);
        bin = BIN_AT(index);
        if (chunk_size >= SMALL_REQUEST_LIMIT) {
            Chunk *cursor = bin->next;
            while (cursor != bin && CHUNK_SIZE(cursor) > chunk_size)
                cursor = cursor->next;
            chunk->next = cursor;
            chunk->prev = cursor->prev;
            cursor->prev->next = chunk;
            cursor->prev = chunk;
        } else {
            chunk->next = bin->next; chunk->prev = bin;
            bin->next->prev = chunk; bin->next = chunk;
        }
        D_0897c04c.binmap |= 1U << (index >> 2);
        bin = UNSORTED_BIN;
    }

    /* Large bins are ordered, so their tail gives the tightest local fit. */
    if (size >= SMALL_REQUEST_LIMIT) {
        bin = BIN_AT(index);
        chunk = bin->prev;
        if (chunk != bin && CHUNK_SIZE(bin->next) >= size) {
            while (CHUNK_SIZE(chunk) < size)
                chunk = chunk->prev;
            if (CHUNK_SIZE(chunk) - size < MIN_CHUNK_SIZE) {
                unlink_chunk(chunk);
                mark_chunk_in_use(chunk, CHUNK_SIZE(chunk));
            } else {
                u32 remainder_size = CHUNK_SIZE(chunk) - size;
                unlink_chunk(chunk);
                split_chunk(chunk, size, remainder_size);
            }
            FUN_0880c57c(allocator);
            return (char *)chunk + 8;
        }
    }

    /* Search bitmap-advertised bins and split the first usable best fit. */
    map = D_0897c04c.binmap;
    for (index += 1, bit = 1U << (index >> 2); bit != 0; bit <<= 1, index += 4) {
        u32 remainder_size;
        if ((map & bit) == 0) continue;
        bin = BIN_AT(index);
        chunk = bin->prev;
        if (chunk == bin) { D_0897c04c.binmap &= ~bit; map &= ~bit; continue; }
        if (CHUNK_SIZE(chunk) < size) continue;
        remainder_size = CHUNK_SIZE(chunk) - size;
        unlink_chunk(chunk);
        if (remainder_size < MIN_CHUNK_SIZE)
            mark_chunk_in_use(chunk, CHUNK_SIZE(chunk));
        else {
            split_chunk(chunk, size, remainder_size);
            if (size < SMALL_REQUEST_LIMIT)
                D_0897c04c.last_remainder = (Chunk *)((char *)chunk + size);
        }
        FUN_0880c57c(allocator);
        return (char *)chunk + 8;
    }

    /* Top split and heap growth belong to the same allocation contract. */
    chunk = D_0897c04c.top;
    if (CHUNK_SIZE(chunk) >= size + MIN_CHUNK_SIZE) {
        u32 remainder_size = CHUNK_SIZE(chunk) - size;
        remainder = (Chunk *)((char *)chunk + size);
        D_0897c04c.top = remainder;
        chunk->size_flags = size | PREV_IN_USE;
        remainder->size_flags = remainder_size | PREV_IN_USE;
        FUN_0880c57c(allocator);
        return (char *)chunk + 8;
    }

    /* Missing path: the reference inlines legacy sYSMALLOc growth details. */
    chunk = (Chunk *)FUN_0880aacc(allocator, size);
    FUN_0880c57c(allocator);
    return chunk;
}
