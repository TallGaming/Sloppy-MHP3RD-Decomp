/*
 * Purpose: load the shared four-component default into a record and refresh
 * its derived matrices.
 *
 * The record is viewed as floats because all four values are loaded and
 * stored as scalar floating-point values.  The matrix-refresh helper keeps
 * its mutable record pointer contract.
 */
typedef unsigned char u8;
typedef unsigned int u32;

struct DefaultsRecord_0882d310 {
    float component_0;
    float component_1;
    float component_2;
    float component_3;
    u8 unknown_0010[0xe84];
    u32 reset_flag_0e94;
};

extern float D_089652d8;
extern float D_089652dc;
extern float D_089652e0;
extern float D_089652e4;
extern void FUN_0882cc80(struct DefaultsRecord_0882d310 *record);

void FUN_0882d310(struct DefaultsRecord_0882d310 *record)
{
    float component_0 = D_089652d8;
    float component_1 = D_089652dc;
    float component_2 = D_089652e0;
    float component_3 = D_089652e4;

    record->reset_flag_0e94 = 0;
    record->component_0 = component_0;
    record->component_1 = component_1;
    record->component_3 = component_3;
    record->component_2 = component_2;
    FUN_0882cc80(record);
}
