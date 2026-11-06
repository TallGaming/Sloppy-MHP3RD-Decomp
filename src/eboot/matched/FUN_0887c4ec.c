/*
 * FUN_0887c4ec: forward the call to FUN_0887c4bc (tail call, arguments unchanged).
 *
 * Main EBOOT, match slice 2 (2-word tail-call wrappers). The parameter
 * lists are unknown; they pass through unchanged, so the wrapper is
 * written without parameters.
 */

void FUN_0887c4bc();

void FUN_0887c4ec(void)
{
    FUN_0887c4bc();
}
