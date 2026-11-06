/*
 * Purpose: readable, target-specific normal-path partial for FUN_0881902c.
 * Its first indirect call consumes a handler in a0; on the normal path it
 * transfers to FUN_08819014, the adjacent std::terminate wrapper candidate.
 * This resembles __cxxabiv1::__unexpected(UnexpectedHandler).
 *
 * UNCOMPILED: the target also contains a second indirect-call path, branches,
 * a direct edge to FUN_08818fdc, plus a transfer to unresolved FUN_0881844c.
 * Their exception/cleanup meaning is not
 * recoverable from this C partial.  No target C++ EH unit or ABI configuration
 * has been proved, so this file is documentation only.
 */
typedef void (*UnexpectedHandler)(void);

extern void FUN_08819014(void); /* std::terminate candidate */

void FUN_0881902c(UnexpectedHandler handler)
{
    handler();
    FUN_08819014();
}
