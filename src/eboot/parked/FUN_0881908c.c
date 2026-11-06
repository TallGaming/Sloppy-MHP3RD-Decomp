/*
 * Purpose: target-specific, readable partial for FUN_0881908c.  Its a0 entry
 * value is an opaque runtime value returned by FUN_088184f0 in the known
 * callable caller.  The target derives arguments from that value for calls to
 * FUN_0881f8e0 and FUN_088185f4 (the __cxa_begin_catch candidate), performs
 * opaque state writes, then reaches FUN_08819014 (termination-wrapper candidate).
 *
 * UNCOMPILED: the entry type, field offsets/ownership, first helper contract,
 * and the conditions that lead to termination are unproved.  This records an
 * ABI-supported call skeleton only, not complete C++ exception semantics.
 */
typedef void *OpaqueRuntimeValue;

extern void FUN_0881f8e0(OpaqueRuntimeValue value); /* contract unknown */
extern void *FUN_088185f4(OpaqueRuntimeValue value); /* begin-catch candidate */
extern void FUN_08819014(void); /* termination-wrapper candidate */

void FUN_0881908c(OpaqueRuntimeValue value)
{
    FUN_0881f8e0(value);
    (void)FUN_088185f4(value);
    FUN_08819014();
}
