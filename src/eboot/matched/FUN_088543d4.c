/*
 * FUN_088543d4: forward the call to FUN_08854a30 (tail call, arguments unchanged).
 *
 * Main EBOOT, match slice 2 (2-word tail-call wrappers). The parameter
 * lists are unknown; they pass through unchanged, so the wrapper is
 * written without parameters.
 */

void FUN_08854a30();

void FUN_088543d4(void)
{
    FUN_08854a30();
}
