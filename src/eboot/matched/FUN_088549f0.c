/*
 * FUN_088549f0: forward the call to FUN_0885ac40 (tail call, arguments unchanged).
 *
 * Main EBOOT, match slice 2 (2-word tail-call wrappers). The parameter
 * lists are unknown; they pass through unchanged, so the wrapper is
 * written without parameters.
 */

void FUN_0885ac40();

void FUN_088549f0(void)
{
    FUN_0885ac40();
}
