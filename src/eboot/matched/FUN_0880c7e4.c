/*
 * Purpose hypothesis: release a thread-ID ownership slot from a nested
 * 32-entry record list while interrupts are suspended.
 *
 * Layout hypothesis for D_08a1bf1c: a next-record pointer, 32 owner words,
 * then 32 thread-ID words.  The record is stored inline at the global address.
 */
typedef unsigned int u32;
typedef struct ThreadRecord {
    struct ThreadRecord *next;
    void *owners[32];
    int thread_ids[32];
} ThreadRecord;

extern ThreadRecord D_08a1bf1c;
extern int FUN_08960a50(void);
extern void FUN_08960a68(int saved_state);

int FUN_0880c7e4(void *thread)
{
    int thread_id = *(int *)((char *)thread + 0x37c);
    int saved_state = FUN_08960a50();
    int slot = thread_id % 32;
    ThreadRecord *record = &D_08a1bf1c;

    while (record->thread_ids[slot] != thread_id) {
        record = record->next;
        if (!record) {
            FUN_08960a68(saved_state);
            return -1;
        }
    }
    /* Preserve the observed delay-slot scheduling of these independent clears. */
    record->owners[slot] = 0;
    record->thread_ids[slot] = 0;
    FUN_08960a68(saved_state);
    return thread_id;
}
