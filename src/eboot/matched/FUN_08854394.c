/*
 * FUN_08854394: forward the call to FUN_08854a40 (tail call, arguments unchanged).
 *
 * Main EBOOT, match slice 2 (2-word tail-call wrappers). The parameter
 * lists are unknown; they pass through unchanged, so the wrapper is
 * written without parameters.
 */

void FUN_08854a40();

void FUN_08854394(void)
{
    FUN_08854a40();
}
