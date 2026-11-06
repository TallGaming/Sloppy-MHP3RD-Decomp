/*
 * FUN_08855870: forward the call to FUN_08855844 (tail call, arguments unchanged).
 *
 * Main EBOOT, match slice 2 (2-word tail-call wrappers). The parameter
 * lists are unknown; they pass through unchanged, so the wrapper is
 * written without parameters.
 */

void FUN_08855844();

void FUN_08855870(void)
{
    FUN_08855844();
}
