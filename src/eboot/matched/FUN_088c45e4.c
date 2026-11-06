/*
 * FUN_088c45e4: initialize a record and publish it as the active object.
 *
 * Main EBOOT, G2 small-frame matching. Names and types are hypotheses.
 */

typedef unsigned char u8;
typedef unsigned short u16;
typedef int s32;

struct Record_088c45e4
{
    s32 unknown_000;
    s32 unknown_004;
    s32 unknown_008;
    u8 unknown_00c[4];
    s32 unknown_010;
    u8 unknown_014;
    u8 unknown_015[0x283];
    u8 unknown_298;
    u8 unknown_299[0x1b];
    u16 unknown_2b4;
    u16 unknown_2b6;
    u16 unknown_2b8;
    u16 unknown_2ba;
};

extern void *D_09bb7e70;
void FUN_088c3680(void);

void FUN_088c45e4(struct Record_088c45e4 *record)
{
    D_09bb7e70 = record;
    FUN_088c3680();
    /* This source order gives the reference store order under GCC's scheduler. */
    record->unknown_000 = 0;
    record->unknown_004 = 0;
    record->unknown_008 = -1;
    record->unknown_014 = 0;
    record->unknown_010 = -1;
    record->unknown_298 = 0;
    record->unknown_2b4 = 0;
    record->unknown_2b6 = 0;
    record->unknown_2b8 = 0;
    record->unknown_2ba = 0;
}
