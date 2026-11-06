/*
 * FUN_088543cc: forward the call to FUN_08854a28 (tail call, arguments unchanged).
 *
 * Main EBOOT, match slice 2 (2-word tail-call wrappers). The parameter
 * lists are unknown; they pass through unchanged, so the wrapper is
 * written without parameters.
 */

void FUN_08854a28();

void FUN_088543cc(void)
{
    FUN_08854a28();
}
