/*
 * Purpose hypothesis: reclaim per-thread reentrancy allocations.
 *
 * This is structurally related to newlib _reclaim_reent.  It recycles the
 * cached conversion result, releases mprec lists and atexit entries, invokes
 * the state cleanup callback, releases allocated embedded stream buffers, and
 * then cleans extension glue.  The state and node layouts are partial ABI
 * reconstructions from this function's observed offsets.
 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

typedef struct Bigint {
    struct Bigint *next;
    int k;
    u32 max_words;
} Bigint;

typedef struct AtexitNode {
    struct AtexitNode *next;
} AtexitNode;

typedef struct StreamRecord {
    u8 unknown[0x0c];
    u16 flags;
    u8 pad[2];
    void *allocation;
    u8 tail[0x5c - 0x14];
} StreamRecord;

typedef struct Glue {
    struct Glue *next;
    int count;
    StreamRecord *records;
} Glue;

typedef struct ReentState {
    u8 before_cleanup[0x38];
    void (*cleanup)(struct ReentState *);
    u8 before_result[4];
    Bigint *result;
    u32 result_k;
    Bigint *p5s;
    Bigint **freelist;
    u8 before_auxiliary[4];
    void *auxiliary;
    u8 before_atexit[0x148 - 0x58];
    AtexitNode *atexit_list;
    u8 embedded_atexit[0x25c - 0x14c];
    Glue glue;
} ReentState;

extern ReentState *D_0896bcb0;
extern void FUN_0880d488(ReentState *state, Bigint *value);
extern void FUN_0880aacc(ReentState *state, void *allocation);
extern void FUN_0880dcd0(ReentState *state, Glue *glue);

void FUN_0880dd18(ReentState *state)
{
    Bigint *node;
    AtexitNode *entry;
    unsigned int index;
    Glue *glue;
    StreamRecord *record;
    int record_index;

    if (state == D_0896bcb0)
        return;

    if (state->result != 0) {
        state->result->k = state->result_k;
        state->result->max_words = 1U << (state->result_k & 31U);
        FUN_0880d488(state, state->result);
    }

    node = state->p5s;
    while (node != 0) {
        Bigint *next = node->next;
        FUN_0880d488(state, node);
        node = next;
    }

    if (state->freelist != 0) {
        for (index = 0; index != 15; index++) {
            node = state->freelist[index];
            while (node != 0) {
                Bigint *next = node->next;
                FUN_0880aacc(state, node);
                node = next;
            }
        }
        FUN_0880aacc(state, state->freelist);
    }

    entry = state->atexit_list;
    while (entry != 0 && entry != (AtexitNode *)state->embedded_atexit) {
        AtexitNode *next = entry->next;
        FUN_0880aacc(state, entry);
        entry = next;
    }

    if (state->auxiliary != 0)
        FUN_0880aacc(state, state->auxiliary);

    if (state->cleanup == 0)
        return;

    state->cleanup(state);
    for (glue = &state->glue; glue != 0; glue = glue->next) {
        record = glue->records;
        for (record_index = 0; record_index < glue->count; record_index++, record++) {
            if ((record->flags & 0x80) != 0 && record->allocation != 0) {
                FUN_0880aacc(state, record->allocation);
                record->allocation = 0;
            }
        }
    }
    if (state->glue.next != 0)
        FUN_0880dcd0(state, state->glue.next);
}
