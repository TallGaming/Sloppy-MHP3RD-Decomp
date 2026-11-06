/*
 * FUN_08854e80: preserve a scalar float across two unclassified service calls.
 *
 * This is a PARKED field/ABI view, not a whole-function candidate.  Local
 * control-flow evidence shows two direct calls, float-register moves, and an
 * intervening result handoff.  Neither callee has a verified prototype, and
 * the available callers do not prove which integer or float slots are live.
 * Compiling an invented signature would turn that missing ABI evidence into a
 * misleading diagnostic, so this file deliberately records only the fields
 * that a future caller/callee recovery must establish.
 */

typedef struct FUN_08854e80_FlowView {
    void *incoming_integer_context; /* exact slot and pointee type unknown */
    float incoming_scalar;          /* observed in the scalar float ABI bank */
    void *first_service_result;     /* forwarded before the second call */
} FUN_08854e80_FlowView;

/*
 * Required recovery evidence:
 * - the concrete prototype and ownership of FUN_08854c4c;
 * - the concrete prototype and ownership of FUN_08854cf4;
 * - one caller that establishes the live integer and float argument slots.
 */
