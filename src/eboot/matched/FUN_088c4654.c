/*
 * FUN_088c4654: initialize a record and publish it as the active object.
 *
 * Main EBOOT, G2 small-frame matching. Names and types are hypotheses.
 */

typedef unsigned char u8;
typedef unsigned short u16;
typedef int s32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

extern void *D_09bb7e70;
void FUN_088c3680(void);

void FUN_088c4654(u8 *record)
{
    D_09bb7e70 = record;
    FUN_088c3680();
    /* This source order gives the reference store order under GCC's scheduler. */
    FIELD(record, s32, 0x00) = 0;
    FIELD(record, s32, 0x04) = 0;
    FIELD(record, s32, 0x08) = -1;
    FIELD(record, u8, 0x14) = 0;
    FIELD(record, s32, 0x10) = -1;
    FIELD(record, u8, 0x298) = 0;
    FIELD(record, u16, 0x2b4) = 0;
    FIELD(record, u16, 0x2b6) = 0;
    FIELD(record, u16, 0x2b8) = 0;
    FIELD(record, u16, 0x2ba) = 0;
}
