/*
 * FUN_088542f0: forward the call to FUN_088545d0 (tail call, arguments unchanged).
 *
 * Main EBOOT, match slice 2 (2-word tail-call wrappers). The parameter
 * lists are unknown; they pass through unchanged, so the wrapper is
 * written without parameters.
 */

void FUN_088545d0();

void FUN_088542f0(void)
{
    FUN_088545d0();
}
