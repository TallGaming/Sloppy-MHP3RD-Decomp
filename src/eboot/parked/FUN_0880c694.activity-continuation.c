/*
 * Purpose hypothesis: register an owner in a 260-byte per-thread record block,
 * indexed by the calling thread identifier modulo 32; extend the block chain
 * only when every existing block has that slot occupied.
 *
 * Each 260-byte block appears to contain its link, 32 owner pointers, and 32
 * thread identifiers.  The reference protects every lookup and mutation with
 * the PSP interrupt-state import pair.  Names and original types remain
 * hypotheses.  Its observable order is important: it updates the caller's
 * identifier first, publishes an owner before its identifier, drops the lock
 * for allocation/clearing, then locks only to append a new block.  Duplicate
 * identifiers return -1 without changing their occupied slot.  The adjacent
 * removal routine at 0x0880c7e4 independently reads and clears the same
 * owner/identifier offsets, supporting this layout hypothesis.
 */
typedef unsigned int u32;
typedef struct Record Record;
typedef struct ThreadOwner ThreadOwner;
struct Record {
    Record *next;
    void *owners[32];
    u32 thread_ids[32];
};
struct ThreadOwner { u32 unused[223]; u32 thread_id; };
extern Record D_08a1bf1c;
extern void *D_0897bcb0;
int FUN_08960a50(void);
void FUN_08960a68(int state);
void *FUN_0880b710(void *allocator, u32 size);
void FUN_0880c468(void *memory, int value, u32 size);

int FUN_0880c694(int thread_id, ThreadOwner *owner)
{
    int slot;
    Record *record;
    Record *previous;
    int state;

    state = FUN_08960a50();
    owner->thread_id = (u32)thread_id;
    slot = thread_id % 32;
    record = &D_08a1bf1c;
    while (record->thread_ids[slot] != 0) {
        if (record->thread_ids[slot] == (u32)thread_id) {
            FUN_08960a68(state);
            return -1;
        }
        previous = record;
        record = record->next;
        if (record == 0)
            break;
    }
    if (record != 0) {
        /* GCC schedules these independent stores in reverse source order. */
        record->thread_ids[slot] = (u32)thread_id;
        record->owners[slot] = owner;
        FUN_08960a68(state);
        return 0;
    }
    FUN_08960a68(state);
    record = (Record *)FUN_0880b710(D_0897bcb0, 260);
    FUN_0880c468(record, 0, 260);
    /* The new block is still private; keep the same store-order shape. */
    record->thread_ids[slot] = (u32)thread_id;
    record->owners[slot] = owner;
    state = FUN_08960a50();
    previous->next = record;
    FUN_08960a68(state);
    return 0;
}
