/*
 * FUN_088cf68c: set one nonzero indexed bit in a record bitmap.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 * PARKED: closest byte-index form retains a different branch/address schedule.
 */

typedef unsigned char u8;
typedef unsigned int u32;

void FUN_088cf68c(u8 *record, u8 index)
{
    u32 *words = (u32 *)(record + 0x9be8);

    if (index != 0) {
        words[index >> 5] |= 1u << index;
    }
}
