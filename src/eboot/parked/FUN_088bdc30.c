/*
 * Purpose: forward the object pointer stored at offset 0x1018 to a helper.
 * Hypothesis: the containing structure is not identified yet.
 *
 * Attempt 1: a natural void wrapper tail-calls the helper.
 * Attempt 2: treating the helper result as ignored still tail-calls it.
 *
 * Blocker: GCC 4.0.4 group B uses a sibling call, while the reference keeps a
 * minimal non-leaf call frame. Revisit with a supported global tail-call rule.
 */
#define FIELD(base, type, offset) (*(type *)((char *)(base) + (offset)))

extern void FUN_0891dca4();

void FUN_088bdc30(void *object) {
    FUN_0891dca4(FIELD(object, void *, 0x1018));
}
