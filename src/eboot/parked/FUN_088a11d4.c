/*
 * FUN_088a11d4: calculate a record-relative position plus a table adjustment.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 * PARKED: GCC expands the constant multiply instead of using the accumulator.
 */

typedef unsigned char u8;
typedef int s32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

extern s32 D_089d1438[];

s32 FUN_088a11d4(u8 *record, s32 index_value, int table_index)
{
    return FIELD(record, s32, 0x274) + index_value * 0x1a800 +
           D_089d1438[table_index];
}
