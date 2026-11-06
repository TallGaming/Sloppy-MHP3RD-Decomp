/*
 * FUN_08854a00: forward the call to FUN_0885ab58 (tail call, arguments unchanged).
 *
 * Main EBOOT, match slice 2 (2-word tail-call wrappers). The parameter
 * lists are unknown; they pass through unchanged, so the wrapper is
 * written without parameters.
 */

void FUN_0885ab58();

void FUN_08854a00(void)
{
    FUN_0885ab58();
}
