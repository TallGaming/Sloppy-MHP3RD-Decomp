/*
 * FUN_08854364: forward the call to FUN_088546d0 (tail call, arguments unchanged).
 *
 * Main EBOOT, match slice 2 (2-word tail-call wrappers). The parameter
 * lists are unknown; they pass through unchanged, so the wrapper is
 * written without parameters.
 */

void FUN_088546d0();

void FUN_08854364(void)
{
    FUN_088546d0();
}
