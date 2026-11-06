/*
 * FUN_088546f0: forward the call to FUN_08859788 (tail call, arguments unchanged).
 *
 * Main EBOOT, match slice 2 (2-word tail-call wrappers). The parameter
 * lists are unknown; they pass through unchanged, so the wrapper is
 * written without parameters.
 */

void FUN_08859788();

void FUN_088546f0(void)
{
    FUN_08859788();
}
