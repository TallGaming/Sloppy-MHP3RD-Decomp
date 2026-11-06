/*
 * FUN_088c51d4: reset two short fields in an indexed record entry.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 * PARKED: closest array form retains two base/index calculation differences.
 */

typedef unsigned char u8;
typedef unsigned short u16;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

void FUN_088c51d4(int index, u8 *record)
{
    u16 *entries = (u16 *)(record + 0x8cd0);

    entries[index] = 0xffff;
    entries[index + 3] = 0;
}
