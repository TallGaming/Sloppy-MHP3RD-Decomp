/*
 * FUN_088bf3a4: store a marked seven-bit value in a small record array.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 * PARKED: argument and narrow-index forms still lower to a different shape.
 */

typedef unsigned char u8;

void FUN_088bf3a4(int index, u8 *record, u8 value)
{
    record[0x21e5 + (short)index] = (value & 0x7f) | 0x80;
}
