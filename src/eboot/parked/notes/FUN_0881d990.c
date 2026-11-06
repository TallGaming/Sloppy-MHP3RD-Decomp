/*
 * Purpose: retain an evidence-bounded ABI view for FUN_0881d990.
 *
 * The entry has two integer live-ins and calls the CFI decoder twice.  This
 * supports comparison with the two-parameter uw_frame_state_for routine, but
 * its interval is eight bytes shorter and the published overlap has 161
 * ordinary differences.  The declaration remains an uncompiled hypothesis.
 */

struct UnwindContextHypothesis;
struct FrameStateHypothesis;

/* Types and return status require target-specific recovery. */
static int FUN_0881d990_field_view(
    struct UnwindContextHypothesis *context,
    struct FrameStateHypothesis *frame_state);
