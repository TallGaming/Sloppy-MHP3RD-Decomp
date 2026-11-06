/*
 * FUN_08945aa8: forward the call to FUN_089029f4 (tail call, arguments unchanged).
 *
 * Main EBOOT, match slice 2 (2-word tail-call wrappers). The parameter
 * lists are unknown; they pass through unchanged, so the wrapper is
 * written without parameters.
 */

void FUN_089029f4();

void FUN_08945aa8(void)
{
    FUN_089029f4();
}
