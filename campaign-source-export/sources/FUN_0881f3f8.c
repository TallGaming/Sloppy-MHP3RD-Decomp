/*
 * Purpose: retain the evidence-bounded recovery view for FUN_0881f3f8.
 *
 * The target has two conservatively observed integer entry slots, two direct
 * calls (the parked frame-state decoder and FUN_0881f240), and two indirect
 * call sites.  This supports the public GCC 4.0.4 ForcedUnwind Phase-2 flow:
 * derive caller frame state, update context, then invoke external callback
 * logic while continuing or terminating according to returned status.
 *
 * This is an uncompiled partial.  The actual callback signature, third/public
 * argument contract, saved exception fields, and indirect callee identities
 * are not proven.  The same-size public body has ordinary differences, so it
 * cannot establish target source or library provenance.
 */

struct UnwindException;
struct UnwindContext;

/* The observed two-slot entry ABI is not enough to state a whole signature. */
static int FUN_0881f3f8_forced_unwind_phase2_view(
    struct UnwindException *exception,
    struct UnwindContext *context_or_callback_state);
