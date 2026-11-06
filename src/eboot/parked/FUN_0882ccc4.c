/*
 * Purpose: refresh the shared view object from a record's position and
 * orientation state, then rebuild its paired transform matrices.
 *
 * The record has real float views here: the scalar portion subtracts the
 * record position from its two stored three-component tuples and scales the
 * results before the two matrix-update passes.  The called matrix routines
 * retain their opaque mutable-pointer ABI because their VFPU bodies have not
 * yet been recovered as portable C.
 */
typedef unsigned char u8;
typedef unsigned short u16;

struct Vec3_0882ccc4 {
    float x;
    float y;
    float z;
};

struct ViewRecord_0882ccc4 {
    u8 unknown_0000[0x0c];
    struct Vec3_0882ccc4 position_000c;
    u8 unknown_0018[8];
    struct Vec3_0882ccc4 basis_0020;
    u8 unknown_002c[4];
    struct Vec3_0882ccc4 target_0030;
    u8 unknown_003c[0x6c];
    float smoothed_z_target_00a8;
    u8 unknown_00ac[0x34];
    float scale_00e0;
    u8 unknown_00e4[0xdbc];
    struct Vec3_0882ccc4 tuple_a_ea0;
    float tuple_a_w_eac;
    struct Vec3_0882ccc4 tuple_b_eb0;
    float tuple_b_w_ebc;
    struct Vec3_0882ccc4 tuple_c_ec0;
};

extern u8 D_08960fe0[];
extern float D_089652b8;
extern float D_089652bc;
extern float D_089652c0;
extern float D_089652c4;
extern void FUN_0882cc80(struct ViewRecord_0882ccc4 *record);
extern void FUN_0882bfb0(struct ViewRecord_0882ccc4 *record, void *a, void *b, void *c);
extern unsigned int FUN_08876920(void *object);
extern unsigned int FUN_08876b08(void *object);
extern void FUN_08875ee8(void *matrix, float x, float y, float z);

void FUN_0882ccc4(struct ViewRecord_0882ccc4 *record)
{
    float divisor = D_089652b8;
    float yaw;
    float pitch;

    record->position_000c.z += (record->smoothed_z_target_00a8 - record->position_000c.z) / divisor;
    record->tuple_b_eb0.x += (record->target_0030.x - record->tuple_b_eb0.x) / divisor;
    record->tuple_b_eb0.y += (record->target_0030.y - record->tuple_b_eb0.y) / divisor;
    record->tuple_b_eb0.z += (record->target_0030.z - record->tuple_b_eb0.z) / divisor;
    record->tuple_a_ea0.x += (record->basis_0020.x - record->tuple_a_ea0.x) / divisor;
    record->tuple_a_ea0.y += (record->basis_0020.y - record->tuple_a_ea0.y) / divisor;
    record->tuple_a_ea0.z += (record->basis_0020.z - record->tuple_a_ea0.z) / divisor;

    FUN_0882cc80(record);
    FUN_0882bfb0(record, &record->tuple_a_ea0, &record->tuple_b_eb0, &record->tuple_c_ec0);
    yaw = (float)(u16)FUN_08876920(D_08960fe0);
    FUN_08875ee8((u8 *)record + 0x1020, 0.0f, yaw * D_089652bc * D_089652c4, record->scale_00e0 * D_089652c0);
    pitch = (float)(u16)FUN_08876b08(D_08960fe0);
    FUN_08875ee8((u8 *)record + 0x1060, 0.0f, pitch * D_089652bc * D_089652c4, record->scale_00e0 * D_089652c0);
}
