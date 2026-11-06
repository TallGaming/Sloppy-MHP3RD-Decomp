/* Purpose: clear the private singleton slot used by the 08818804 state path.
 * Hypothesis: D_0896c454 is a writable pointer-sized runtime slot, not a
 * public-library object with a recovered declaration.  The extern spelling
 * preserves the target's relocatable signed-low-half address materialization.
 */
extern void *D_0896c454;

void FUN_088187f8(void) {
    D_0896c454 = 0;
}
