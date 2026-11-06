/*
 * FUN_0890641c: forward the call to FUN_08906304 (tail call, arguments unchanged).
 *
 * Main EBOOT, match slice 2 (2-word tail-call wrappers). The parameter
 * lists are unknown; they pass through unchanged, so the wrapper is
 * written without parameters.
 */

void FUN_08906304();

void FUN_0890641c(void)
{
    FUN_08906304();
}
