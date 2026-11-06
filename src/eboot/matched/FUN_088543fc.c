/*
 * FUN_088543fc: forward the call to FUN_0885460c (tail call, arguments unchanged).
 *
 * Main EBOOT, match slice 2 (2-word tail-call wrappers). The parameter
 * lists are unknown; they pass through unchanged, so the wrapper is
 * written without parameters.
 */

void FUN_0885460c();

void FUN_088543fc(void)
{
    FUN_0885460c();
}
