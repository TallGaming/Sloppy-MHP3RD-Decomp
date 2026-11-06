/*
 * Purpose: target-specific readable partial for the 24-byte termination wrapper
 * at FUN_08819014.  The control-flow shape loads the installed terminate
 * handler and invokes FUN_08818fdc, the adjacent __cxxabiv1::__terminate
 * candidate.
 *
 * UNCOMPILED: this is documentation, not a source-match candidate.  The
 * original operation belongs to GCC 4.0.4 libsupc++ eh_terminate.cc and its
 * C++ exception ABI.  The target object configuration, handler-global
 * definition/initialization, and EH metadata are not established.
 */
typedef void (*TerminateHandler)(void);

extern TerminateHandler __terminate_handler; /* ownership/binding unproved */
extern void FUN_08818fdc(TerminateHandler handler); /* non-returning candidate; ABI unproved */

void FUN_08819014(void)
{
    /* Public GCC 4.0.4 analogue: __terminate(__terminate_handler). */
    FUN_08818fdc(__terminate_handler);
}
