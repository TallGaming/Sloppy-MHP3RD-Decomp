/*
 * FUN_088a8ba0: select one of two record values by type.
 *
 * Main EBOOT, G2 leaf-with-branches matching. Names and types are hypotheses.
 */

typedef unsigned char u8;
typedef int s32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

s32 FUN_088a8ba0(u8 *record, s32 type)
{
    s32 value;

    if (type == 4) {
        value = FIELD(record, s32, 0x5d8);
    } else {
        value = 0;
        if (type == 5) {
            value = FIELD(record, s32, 0x5e0);
        }
    }
    return value;
}
