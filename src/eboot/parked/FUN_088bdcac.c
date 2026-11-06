/*
 * Purpose: pass the subobject at offset 0x1f88 to a helper.
 * Hypothesis: the containing structure has not been identified yet.
 *
 * Attempt 1: the natural wrapper tail-calls the helper.
 *
 * Blocker: GCC 4.0.4 group B uses a sibling call, whereas the reference keeps
 * a minimal non-leaf call frame. Revisit with a supported global tail-call
 * policy change.
 */
extern void FUN_08945fd4();

void FUN_088bdcac(void *object) {
    FUN_08945fd4((char *)object + 0x1F88);
}
