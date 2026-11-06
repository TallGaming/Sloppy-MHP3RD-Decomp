/*
 * Purpose: retain the target field/ABI investigation for FUN_0881e548.
 * This is an uncompiled partial view, not a whole candidate.  The public
 * uw_update_context_1 lead is nonexact, so its helper ownership and any
 * target-specific scheduling remain unconfirmed.
 */

typedef unsigned long UnwindWord;

struct UnwindContext;
struct UnwindFrameState;

/*
 * Field-level dataflow to establish from target callers and relocations:
 * input context is copied for reads, then its CFA and saved-register slots
 * are updated from frame-state CFA mode and per-register save mode.
 * Public CFA modes are register-plus-offset and expression evaluation.
 * Public target configuration can conditionally add stack-adjustment state;
 * target configuration for that path is not established here.
 * Public per-register modes are unsaved, CFA-relative offset, saved-register
 * alias, and expression-derived address; target mode values/field offsets
 * remain unverified.
 */
static void FUN_0881e548_context_update_view(
    struct UnwindContext *context,
    struct UnwindFrameState *frame_state);
