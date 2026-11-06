/*
 * Purpose: record the verified cursor-owner and output-block boundaries used
 * by FUN_08856ce0 while the mapping of its six pending-range calls remains
 * incomplete.
 *
 * This is an uncompiled PARKED field view, not a whole candidate.  Local
 * decoding shows six transfers through the shared word cursor, six calls to
 * the recovered pending-range initializer, and one indexed stream-record
 * emission.
 * The only declared caller does not yet establish the four incoming object
 * types or branch predicates.  The fields below are deliberately limited to
 * target-observed offsets and the independently supported global cursor.
 */

typedef unsigned char u8;
typedef unsigned int u32;

typedef struct PendingRange08856c58 {
    u8 unknown_000[0x180];
    u8 pending;
    u8 slot;
    u8 alignment[2];
    u32 first;
} PendingRange08856c58;

typedef struct StreamCursorOwner {
    u32 word_00;
    u32 word_04;
    u32 word_08;
    u32 word_0c;
    u8 unknown_0010[0x1e78];
    u32 *stream_cursor;
} StreamCursorOwner;

typedef struct OutputWordBlock {
    u32 word_00;
    u32 word_04;
    u32 word_08;
    u32 word_0c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u32 word_30;
    u32 word_34;
    u32 word_38;
    u32 word_3c;
    u32 word_40;
    u32 word_44;
    u8 unknown_0048[0x1e40];
    u32 *stream_cursor;
} OutputWordBlock;

/* FUN_08856b54 independently establishes this as the shared word cursor. */
extern u32 *D_08a31e88;

/* Recovered dependency contract; this target's six concrete arguments remain open. */
extern int FUN_08856c58(PendingRange08856c58 *range);

void FUN_08856ce0(unsigned int selector_or_context,
                  StreamCursorOwner *first_owner,
                  OutputWordBlock *output,
                  StreamCursorOwner *third_owner)
{
    (void)selector_or_context;

    /* These cursor boundaries are target-observed but branch ordering is open. */
    first_owner->stream_cursor = D_08a31e88;
    output->stream_cursor = D_08a31e88;
    third_owner->stream_cursor = D_08a31e88;

}
