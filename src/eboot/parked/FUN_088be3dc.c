/*
 * Purpose: invoke the nearby helper with selector value 25.
 * Hypothesis: the first input is forwarded unchanged.
 *
 * Attempt 1: the natural wrapper tail-calls the helper.
 *
 * Blocker: GCC 4.0.4 group B uses a sibling call, while the reference retains
 * a minimal non-leaf call frame. Revisit with a supported global tail-call
 * policy change.
 */
extern void FUN_088be3b4();

void FUN_088be3dc(void *object) {
    FUN_088be3b4(object, 25);
}
