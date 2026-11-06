/*
 * Purpose: retain a constrained ABI hypothesis for FUN_0881d454.
 *
 * The target's four integer live-in slots and two direct call sites that
 * visibly prepare those slots support a four-parameter ABI hypothesis.  Its unwind-runtime helper
 * dependencies and 1340-byte interval support
 * comparison with execute_cfa_program.  The fixed-profile public body has 89
 * ordinary differences, so this is an uncompiled field view rather than an
 * unchanged-library claim or a source candidate.
 */

struct DwarfInstructionStream;
struct UnwindContextHypothesis;
struct FrameStateHypothesis;

/*
 * Hypothesis only: the four live-in slots have target-specific roles, but
 * their types and behavior are not recovered.
 */
static void FUN_0881d454_field_view(
    const struct DwarfInstructionStream *begin,
    const struct DwarfInstructionStream *end,
    struct UnwindContextHypothesis *context,
    struct FrameStateHypothesis *frame_state);
