/*
 * Purpose hypothesis: invoke one imported helper.
 *
 * Parked after typed void, ignored int, and unprototyped helper declarations.
 * Group-A GCC 4.0.4 emits a sibling tail call for every form; the reference
 * retains a normal call and frame. Revisit after the tail-call decision.
 */
extern void FUN_08960c68();

void FUN_0880465c(void)
{
    FUN_08960c68();
}
