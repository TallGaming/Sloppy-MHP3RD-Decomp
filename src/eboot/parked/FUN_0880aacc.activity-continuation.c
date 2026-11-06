/*
 * Purpose hypothesis: allocator free/coalescing operation, structurally
 * equivalent to an early dlmalloc free path.
 *
 * The input is a user pointer eight bytes after a boundary-tag chunk header.
 * The routine merges predecessor and successor free chunks, handles the top
 * chunk, and inserts the result in 64 small bins or 128 sorted large bins
 * under the allocator lock.  The state is a process-global allocator at a
 * recovered address; the first word pair is the bin-map/header overlap.
 *
 * Hypothesis: this follows the dlmalloc 2.6.5 algorithm used by the newlib
 * integration in this binary.  The large-bin index thresholds and the
 * special bin-one path are recovered from control flow.
 */
typedef unsigned int u32;
typedef struct Chunk {
    u32 prev_foot;
    u32 head;
    struct Chunk *fd;
    struct Chunk *bk;
} Chunk;

typedef unsigned char u8;

/* The allocator state layout is not fully named yet. */
#define WORD_AT(base, offset) (*(u32 *)((u8 *)(base) + (offset)))
#define PTR_AT(base, offset) (*(Chunk **)((u8 *)(base) + (offset)))

static u8 *const gAllocatorBins = (u8 *)0x0896c04c;

static void unlink_chunk(Chunk *chunk)
{
    Chunk *forward = chunk->fd;
    Chunk *backward = chunk->bk;

    backward->fd = forward;
    forward->bk = backward;
}

static u32 large_bin_index(u32 size)
{
    u32 shifted = size >> 9;

    if (shifted == 0)
        return size >> 3;
    if (shifted < 5)
        return (size >> 6) + 56;
    if (shifted < 21)
        return (size >> 9) + 91;
    if (shifted < 85)
        return (size >> 12) + 110;
    if (shifted < 341)
        return (size >> 15) + 119;
    if (shifted < 1365)
        return (size >> 18) + 124;
    return 126;
}

extern void FUN_0880c540(void);
extern void FUN_0880c57c(void *state);
extern int FUN_0880a9a8(void *state, int pad);

void FUN_0880aacc(void *state, void *memory)
{
    Chunk *chunk;
    Chunk *next;
    Chunk *backward;
    Chunk *forward;
    u32 size;
    u32 next_size;
    u32 index;
    int remains_in_bin_one;

    if (!memory)
        return;
    FUN_0880c540();
    /* Allocator payloads begin after the two-word boundary tag. */
    chunk = (Chunk *)((u8 *)memory - 8);
    size = chunk->head & ~1U;
    next = (Chunk *)((char *)chunk + size);
    next_size = next->head & ~3U;

    /* The top pointer occupies the third word of the recovered state. */
    if (next == PTR_AT(gAllocatorBins, 8)) {
        if ((chunk->head & 1U) == 0) {
            u32 previous_size = chunk->prev_foot;

            chunk = (Chunk *)((u8 *)chunk - previous_size);
            size += previous_size;
            unlink_chunk(chunk);
        }
        size += next_size;
        PTR_AT(gAllocatorBins, 8) = chunk;
        chunk->head = size | 1U;
        if (size >= *(u32 *)0x0897c048)
            (void)FUN_0880a9a8(state, *(int *)0x08a2bf10);
        FUN_0880c57c(state);
        return;
    }

    next->head = next_size;
    remains_in_bin_one = 0;

    if ((chunk->head & 1U) == 0) {
        u32 previous_size = chunk->prev_foot;
        Chunk *previous = (Chunk *)((u8 *)chunk - previous_size);

        size += previous_size;
        chunk = previous;
        if (chunk->fd == (Chunk *)(gAllocatorBins + 8))
            remains_in_bin_one = 1;
        else
            unlink_chunk(chunk);
    }
    if ((next->head & 1U) == 0) {
        size += next_size;
        if (remains_in_bin_one == 0 &&
            next->fd == (Chunk *)(gAllocatorBins + 8)) {
            Chunk *last_remainder = (Chunk *)(gAllocatorBins + 8);

            remains_in_bin_one = 1;
            last_remainder->fd = chunk;
            last_remainder->bk = chunk;
            chunk->fd = last_remainder;
            chunk->bk = last_remainder;
        }
        else
            unlink_chunk(next);
    }

    chunk->head = size | 1U;
    ((Chunk *)((u8 *)chunk + size))->prev_foot = size;
    if (remains_in_bin_one != 0) {
        FUN_0880c57c(state);
        return;
    }

    if (size < 512) {
        index = size >> 3;
        backward = (Chunk *)(gAllocatorBins + (index << 3));
        forward = backward->fd;
        WORD_AT(gAllocatorBins, 4) |= 1U << (index >> 2);
    }
    else {
        index = large_bin_index(size);
        backward = (Chunk *)(gAllocatorBins + (index << 3));
        forward = backward->fd;
        if (forward == backward)
            WORD_AT(gAllocatorBins, 4) |= 1U << (index >> 2);
        else {
            while (forward != backward && (forward->head & ~3U) > size)
                forward = forward->fd;
            backward = forward->bk;
        }
    }
    chunk->bk = backward;
    chunk->fd = forward;
    forward->bk = chunk;
    backward->fd = chunk;
    FUN_0880c57c(state);
}
