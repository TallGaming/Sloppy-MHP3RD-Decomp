/*
 * FUN_088546b8: forward the call to FUN_08858728 (tail call, arguments unchanged).
 *
 * Main EBOOT, match slice 2 (2-word tail-call wrappers). The parameter
 * lists are unknown; they pass through unchanged, so the wrapper is
 * written without parameters.
 */

void FUN_08858728();

void FUN_088546b8(void)
{
    FUN_08858728();
}
