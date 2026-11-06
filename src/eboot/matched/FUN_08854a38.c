/*
 * FUN_08854a38: forward the call to FUN_0885a960 (tail call, arguments unchanged).
 *
 * Main EBOOT, match slice 2 (2-word tail-call wrappers). The parameter
 * lists are unknown; they pass through unchanged, so the wrapper is
 * written without parameters.
 */

void FUN_0885a960();

void FUN_08854a38(void)
{
    FUN_0885a960();
}
