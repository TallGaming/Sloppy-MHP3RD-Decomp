/*
 * Purpose: partial ABI recovery for a shared-state vector update.
 *
 * Both known callers bind argument 0 to the state owned through D_08a29198.
 * Argument 1 is an in/out four-float vector.  The target always writes its
 * fourth element from D_0896527c and conditionally updates x/y/z using state
 * fields at +0x0ed0/+0x0ed4 and two three-float groups at +0x1140/+0x114c.
 * The reference contains two VFPU vtfm4.q transforms. Argument 2, argument
 * 3, matrix roles, and the exact branch conditions remain diagnostic only.
 */
typedef struct {
    float x;
    float y;
    float z;
    float w;
} Vec4;

extern float D_0896527c;

void FUN_0882c5e0(void *shared_state, Vec4 *in_out,
                  const void *diagnostic_input, unsigned int diagnostic_mode)
{
    in_out->w = D_0896527c;

    (void)shared_state;
    (void)diagnostic_input;
    (void)diagnostic_mode;
}
