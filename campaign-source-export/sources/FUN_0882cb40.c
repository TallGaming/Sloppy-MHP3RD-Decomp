/*
 * Purpose: initialize the 64-byte transform-like part at record +0x0f60.
 *
 * The only caller supplies that part as argument 1. The target clears all
 * 64 bytes through thunk_FUN_0880c468, then writes float fields at offsets
 * 0x00, 0x14, 0x28, 0x2c and 0x38. The field values use D_089652ac/b0/b4
 * and VFPU scalar cosine/sine operations. Their role is not established, so
 * the scalar locals below are explicitly diagnostic rather than a recovery
 * of the post-clear transform calculation.
 */
typedef unsigned char u8;
typedef struct {
    float field_00;
    u8 unknown_04[0x10];
    float field_14;
    u8 unknown_18[0x10];
    float field_28;
    float field_2c;
    u8 unknown_30[8];
    float field_38;
    u8 unknown_3c[4];
} Part64;

extern float D_089652ac;
extern float D_089652b0;
extern float D_089652b4;
extern void thunk_FUN_0880c468(void *destination, int value, unsigned int size);

void FUN_0882cb40(void *record, Part64 *part)
{
    float diagnostic_angle_a = D_089652ac;
    float diagnostic_angle_b = D_089652b0;
    float diagnostic_scale = D_089652b4;

    thunk_FUN_0880c468(part, 0, 64);
    (void)record;
    (void)diagnostic_angle_a;
    (void)diagnostic_angle_b;
    (void)diagnostic_scale;
}
