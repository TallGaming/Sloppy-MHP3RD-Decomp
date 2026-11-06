/*
 * Purpose: retain the evidence-bounded recovery view for FUN_0881e748.
 *
 * The target has three observed integer argument slots and is called directly
 * by three neighbouring unwind-runtime entry points.  Its direct calls to a
 * byte-fill helper, frame-state decoder, context updater, interrupt suspend /
 * resume imports, delay import, and abort establish the public GCC 4.0.4
 * `uw_init_context_1` body as a semantic provenance lead.
 *
 * This is deliberately an uncompiled partial, not a whole candidate.  The
 * target-specific unwind configuration, complete structure layouts, local
 * one-time initialization implementation, and true external relocations have
 * not been recovered.  The GCC source therefore cannot establish an exact
 * body or an ABI/provenance-qualified library classification.
 */

struct UnwindContext;
struct UnwindFrameState;
struct UnwindSpTmp;

/*
 * Supported ABI view: context, caller CFA, and caller return address occupy
 * the first three integer argument slots at target entry.  The recovered
 * control flow clears a context, derives frame state, ensures register-size
 * initialization, overrides the CFA state, updates the context, and finally
 * installs the supplied outer return address.  Field offsets remain unknown.
 */
static void FUN_0881e748_unwind_context_initialization_view(
    struct UnwindContext *context,
    void *outer_cfa,
    void *outer_return_address);
