/*
 * FUN_088cd5e4: clear one indexed bit in a record bitmap.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 */

typedef unsigned char u8;
typedef unsigned int u32;

void FUN_088cd5e4(u8 *record, u8 index)
{
    u32 *words = (u32 *)(record + 0x9be8);

    words[index >> 5] &= ~(1u << index);
}
