/*
 * Purpose: preserve the evidence boundary for the no-argument game-service
 * initialization subroutine FUN_0884722c.
 *
 * The sole declared caller invokes this function during service initialization
 * after process-global service pointers are assigned.  Target direct-call
 * evidence identifies only FUN_088f9cd0 (a registered record-field reset)
 * and FUN_088f9fac (a registered no-argument forwarder).  A neutral synthetic
 * execution reaches repeated reset calls and both reads and writes, confirming
 * that this is not a leaf wrapper.  The static record bases, loop bounds,
 * field ownership, and the intended interface behind the forwarded call are
 * not proven.  Do not turn this view into a stub or a guessed array layout.
 */

extern void FUN_088f9cd0(void *record);
extern void FUN_088f9fac(void);

/* A body requires proven static data bindings and loop/object provenance. */
