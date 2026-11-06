/*
 * Purpose: retain the target-local callable and fixed-selector facts without
 * inventing an address binding for the unlabelled shared context pointer.
 * This is an uncompiled field view, not a whole-function candidate.
 */
typedef struct TargetContext_0883e974 TargetContext_0883e974;

extern int FUN_0885cafc(TargetContext_0883e974 *context, unsigned int selector);

/*
 * Synthetic target flow supports seven calls with these selectors, all using
 * the same shared context. The target returns false if any call returns -1.
 * It does not short-circuit: all seven calls occur for artificial failures.
 */
static const unsigned int s_selectors_0883e974[7] = {
    1144, 1232, 1168, 1184, 1200, 1216, 1156
};
