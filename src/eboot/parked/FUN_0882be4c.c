/*
 * Purpose: diagnostic ABI draft for the paired per-object vector update.
 *
 * FUN_0882bfb0 calls this twice, for slots at parent offsets 0x0ee0 and
 * 0x0f20, while forwarding its other three arguments unchanged.  The target
 * writes a scalar at slot + 0x30 from the unlabelled float at 0x0896524c,
 * then writes the x/y/z tail at output + 4/+8/+12.  Its core is VFPU code,
 * so the scalar value below is an intentionally diagnostic placeholder, not
 * a claimed recovery of that transform.
 */
typedef struct {
    unsigned char unknown_00[0x30];
    float scalar_30;
} TargetSlot;

typedef struct {
    float reserved_00;
    float x_04;
    float y_08;
    float z_0c;
} VectorTail;

void FUN_0882be4c(TargetSlot *slot, VectorTail *output,
                  const void *input, const void *parameters)
{
    float diagnostic_default_scalar = 0.0f;

    slot->scalar_30 = diagnostic_default_scalar;
    (void)output;
    (void)input;
    (void)parameters;
    (void)diagnostic_default_scalar;
}
