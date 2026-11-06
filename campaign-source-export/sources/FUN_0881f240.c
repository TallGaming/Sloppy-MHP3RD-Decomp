/*
 * Purpose: retain the evidence-bounded recovery view for FUN_0881f240.
 *
 * The 120-byte target has two observed integer argument slots.  It is called
 * from three unwind-runtime neighbours and first delegates to the parked
 * context-update helper.  Its remaining inlined path reads the saved return
 * address through a register-size check, stores the resulting address in the
 * context, and reaches abort for an unsupported register size.  Those facts
 * support GCC 4.0.4 `uw_update_context` as a semantic lead.
 *
 * This is deliberately an uncompiled partial, not a whole candidate.  The
 * public body is same-sized but is not byte-identical under the available
 * fixed profile.  No target configuration, context/frame-state layout, or
 * dependency binding proves the lowering difference or library provenance.
 */

struct UnwindContext;
struct UnwindFrameState;

/*
 * Supported ABI view: context and frame state occupy the first two integer
 * argument slots.  The true return-address column and register-table layout
 * are still unresolved, so this declaration must not be compiled as source.
 */
static void FUN_0881f240_context_update_view(
    struct UnwindContext *context,
    struct UnwindFrameState *frame_state);
