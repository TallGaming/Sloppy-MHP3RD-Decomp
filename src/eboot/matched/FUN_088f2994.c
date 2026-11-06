/*
 * FUN_088f2994: forward the call to FUN_088f28f4 (tail call, arguments unchanged).
 *
 * Main EBOOT, match slice 2 (2-word tail-call wrappers). The parameter
 * lists are unknown; they pass through unchanged, so the wrapper is
 * written without parameters.
 */

void FUN_088f28f4();

void FUN_088f2994(void)
{
    FUN_088f28f4();
}
