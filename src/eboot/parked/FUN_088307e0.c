/*
 * Purpose: run a predicate with a callback address, then issue event 0x8005.
 * Hypothesis: both caller inputs are forwarded unchanged.
 *
 * Attempt 1: direct callback-address use matches every instruction except the
 * low-half address materialization (ori versus reference addiu).
 * Attempt 2: spelling the address as base plus offset retains the ori form.
 *
 * Blocker: GCC 4.0.4 canonicalizes this absolute address with ori, while the
 * reference uses addiu. Revisit with a supported address-legitimization rule.
 */
extern int FUN_08839da4(int mode, void *callback, void *first, void *second);
extern void FUN_0883942c(int event, void *first, void *second);

int FUN_088307e0(void *first, void *second) {
    if (FUN_08839da4(1, (void *)0x08830B64, first, second) != 0) {
        FUN_0883942c(0x8005, first, second);
    }
    return 0;
}
