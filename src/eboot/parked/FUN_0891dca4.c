/*
 * Purpose: invoke the helper used by the surrounding dispatch path.
 * Hypothesis: incoming arguments pass through unchanged.
 *
 * Attempt 1: a natural plain wrapper becomes a GCC sibling call.
 *
 * Blocker: the reference uses a minimal non-leaf call frame. Revisit with a
 * supported global tail-call policy change.
 */
extern void FUN_0891cd74();

void FUN_0891dca4(void) {
    FUN_0891cd74();
}
