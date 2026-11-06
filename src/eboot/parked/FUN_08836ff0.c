/*
 * Purpose: preserve the supported two-pointer entry view for FUN_08836ff0.
 *
 * This is an uncompiled partial view, not a whole-function candidate.  Its
 * sole known direct caller reaches the target at two sites with two distinct
 * stack-derived pointer pairs.  Synthetic scalar runs corroborate that the
 * first pointer lane is returned while the target clears a 20-byte area and
 * drives a packet helper sequence.  Artificial submit-result probes also show
 * that the final dispatch is reached only for a zero submit result.  The
 * object layouts and the second lane's complete contract remain unproved.
 */

typedef unsigned char u8;

/* Registered pointer getter used by the target's shared-record path. */
extern void *FUN_0882fc38(void);

/* Provisional ABI view only; do not compile as a candidate. */
void *FUN_08836ff0_partial_view(void *out_20_bytes, const void *input_record);

/* No implementation: packet ownership and complete ABI remain unproved. */
struct FUN_08836ff0_partial_entry {
    u8 unknown;
};
