/*
 * Partial two-word callback wrapper hypothesis for FUN_08819f00.
 * Local structural evidence proves one direct call to FUN_08819f78 and no
 * recovered local branch.  The helper's identity and the two parameter
 * meanings remain unknown, so this is a bounded natural-C diagnostic rather
 * than a claimed recovery of the 116-byte runtime callback.
 */
extern void FUN_08819f78(void *context, void *state);

void FUN_08819f00(void *context, void *state)
{
    FUN_08819f78(context, state);
}
