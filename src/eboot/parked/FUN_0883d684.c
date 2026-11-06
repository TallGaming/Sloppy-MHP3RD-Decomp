/* Purpose: retain the evidenced field and call-flow view for this uncompiled target. */
#include <stdint.h>

typedef struct TargetState {
    uint8_t unknown[4835];
    uint8_t completion_flag;
} TargetState;

typedef struct TargetInput {
    uint8_t unknown[4];
    uint8_t mode_byte;
} TargetInput;

/* FUN_0885e3a0 has no verified callable ABI; this declaration is a flow-only view. */
extern uint32_t FUN_0885e3a0_flow_only(void *manager, uint32_t value,
                                       uint32_t class_id, uint32_t operation);

/*
 * Every observed caller supplies a state at lane 0, a mode object at lane 1,
 * two scalar gates at lanes 2 and 4, a value at lane 3, and output pointers
 * at lanes 5 (u16) and 6 (u32).  The target first invokes the unresolved
 * manager operation with class 6 and operation 1, stores its low halfword,
 * and may issue a second operation when the lane-4 gate is nonzero.
 * Completion status and exact return ownership need callee/source context.
 */
static uint32_t FUN_0883d684_partial(TargetState *state, TargetInput *input,
                                     uint32_t gate_a, uint32_t value,
                                     uint32_t gate_b, uint16_t *result_out,
                                     uint32_t *status_out, uint32_t unused_lane)
{
    (void)gate_a;
    (void)input;
    (void)unused_lane;
    *result_out = (uint16_t)FUN_0885e3a0_flow_only((void *)0, value, 6, 1);
    if (gate_b != 0) {
        (void)FUN_0885e3a0_flow_only((void *)0, gate_b, 6, 1);
    }
    if (state->completion_flag != 0) {
        *status_out = 0; /* Real status encoding is unresolved. */
    }
    return 0; /* Flow-only partial: not a candidate. */
}
