/*
 * FUN_088c37bc: invalidate an entry and clear its active bit.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 * PARKED: load/store scheduling remains different across equivalent pointer forms.
 */

typedef unsigned char u8;
typedef unsigned short u16;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

void FUN_088c37bc(u8 *record, int index)
{
    u16 *entry = (u16 *)record + index * 10;
    u16 flags = entry[0x15];

    entry[0x12] = 0xffff;
    entry[0x15] = flags & 0xfffe;
}
