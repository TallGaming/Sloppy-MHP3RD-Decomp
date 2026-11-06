/*
 * FUN_08854a40: forward the call to FUN_0885a458 (tail call, arguments unchanged).
 *
 * Main EBOOT, match slice 2 (2-word tail-call wrappers). The parameter
 * lists are unknown; they pass through unchanged, so the wrapper is
 * written without parameters.
 */

void FUN_0885a458();

void FUN_08854a40(void)
{
    FUN_0885a458();
}
