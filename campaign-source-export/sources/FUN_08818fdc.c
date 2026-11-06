/*
 * Purpose: recover the libsupc++ terminate wrapper.  It invokes the supplied
 * terminate handler and aborts if the handler returns.  This is an uncompiled
 * C partial: the public C++ body also has a catch-all abort path whose EH
 * landing-pad lowering is not contained or proven by this 24-byte interval.
 */

typedef void (*terminate_handler)(void);

extern void runtime_abort(void);

static void
cxa_terminate(terminate_handler handler)
{
    handler();
    runtime_abort();
}
