/*
 * FUN_088546c8: forward the call to FUN_0885879c (tail call, arguments unchanged).
 *
 * Main EBOOT, match slice 2 (2-word tail-call wrappers). The parameter
 * lists are unknown; they pass through unchanged, so the wrapper is
 * written without parameters.
 */

void FUN_0885879c();

void FUN_088546c8(void)
{
    FUN_0885879c();
}
