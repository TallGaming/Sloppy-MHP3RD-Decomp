/*
 * FUN_08856594: consume a pending word-range descriptor before resetting it.
 *
 * This is an uncompiled field and ABI view, not a whole matching candidate.
 * The target conditionally reads a byte at 384 and a word at 388, derives a
 * word count from the latter and a writable global cursor, invokes the parked
 * output helper FUN_088756e8 plus FUN_08875870 only for a nonempty range, then
 * clears both descriptor fields even when the range is empty.  The
 * output-object source and the complete helper contracts remain unverified,
 * so spelling out those calls as ordinary source would invent ownership and
 * behavior.
 */

typedef unsigned char u8;
typedef unsigned int u32;

typedef struct PendingWordRange {
    u8 unknown_000[384];
    u8 pending;
    u8 output_slot;
    u8 unknown_182[2];
    u32 *first_word;
} PendingWordRange;

/* A target-proved writable word; pointer element type is a hypothesis. */
extern u32 *D_08a31e88;

void FUN_08856594(PendingWordRange *range)
{
    if (range->pending != 0) {
        /* The original conditionally emits the range through unverified helpers. */
        range->pending = 0;
        range->first_word = 0;
    }
}
