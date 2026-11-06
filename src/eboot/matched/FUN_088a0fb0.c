/*
 * FUN_088a0fb0: release a positive handle and clear its record fields.
 *
 * Main EBOOT, G2 frame-plus-branches matching. Names and types are hypotheses.
 */

typedef unsigned char u8;
typedef int s32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

void FUN_08960b00(s32 handle);

void FUN_088a0fb0(u8 *record)
{
    s32 handle = FIELD(record, s32, 0x4e4);

    if (handle > 0) {
        FUN_08960b00(handle);
        /* This source order gives the reference store order under GCC. */
        FIELD(record, s32, 0x4e4) = 0;
        FIELD(record, s32, 0x4e8) = 0;
    }
}
