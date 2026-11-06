/*
 * FUN_0889a8fc: scale a decoded value by a record coefficient.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 */

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

s32 FUN_08899ec8(u32 value);

s32 FUN_0889a8fc(u8 *record)
{
    s32 decoded = FUN_08899ec8(FIELD(record, u32, 0x00) >> 8);
    s32 product = decoded * FIELD(record, u16, 0x06);

    return product / 32768;
}
