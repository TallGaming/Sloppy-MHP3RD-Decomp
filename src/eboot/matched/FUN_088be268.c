/*
 * FUN_088be268: set a record flag and set a bit through a global offset.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 */

typedef unsigned char u8;
typedef unsigned int u32;

extern u32 D_08a33e70;

void FUN_088be268(u8 *record)
{
    u32 offset = D_08a33e70;
    u32 *flags = (u32 *)((u8 *)&D_08a33e70 + offset);
    u32 value = *flags;

    record[0x21bb] = 1;
    value |= 0x08000000;
    *flags = value;
}
