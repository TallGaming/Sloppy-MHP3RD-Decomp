/*
 * FUN_088a32c8: toggle two services and clear a small state record.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 */

typedef unsigned char u8;
typedef unsigned int u32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

void FUN_08960d48(int value);
void FUN_08960d38(int value);

void FUN_088a32c8(u8 *record)
{
    FUN_08960d48(0);
    FUN_08960d38(1);
    /* This source order gives the reference store order under GCC. */
    FIELD(record, u32, 0x10) = 0;
    FIELD(record, u32, 0x14) = 0;
    FIELD(record, u32, 0x18) = 0;
    record[0x1c] = 0;
    record[0x1d] = 0;
    record[0x1e] = 0;
}
