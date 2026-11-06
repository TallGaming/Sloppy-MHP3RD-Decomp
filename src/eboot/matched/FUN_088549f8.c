/*
 * FUN_088549f8: forward the call to FUN_0885abd4 (tail call, arguments unchanged).
 *
 * Main EBOOT, match slice 2 (2-word tail-call wrappers). The parameter
 * lists are unknown; they pass through unchanged, so the wrapper is
 * written without parameters.
 */

void FUN_0885abd4();

void FUN_088549f8(void)
{
    FUN_0885abd4();
}
