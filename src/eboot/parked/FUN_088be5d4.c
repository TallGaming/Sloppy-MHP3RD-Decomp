/*
 * Purpose: forward the object pointer stored at offset 0x1018 to a helper.
 * Hypothesis: the containing structure is not identified yet.
 *
 * Attempt 1: a natural wrapper tail-calls the helper.
 *
 * Blocker: GCC 4.0.4 group B uses a sibling call, while the reference retains
 * a minimal non-leaf call frame. Revisit with a supported global tail-call
 * policy change.
 */
#define FIELD(base, type, offset) (*(type *)((char *)(base) + (offset)))

extern void FUN_08919130();

void FUN_088be5d4(void *object) {
    FUN_08919130(FIELD(object, void *, 0x1018));
}
