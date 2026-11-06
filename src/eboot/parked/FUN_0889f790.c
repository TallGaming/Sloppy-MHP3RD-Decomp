/*
 * FUN_0889f790: compare two byte fields with two argument values.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 * PARKED: only the local absolute jump encoding differs in the object check.
 */

typedef unsigned char u8;
typedef unsigned short u16;

int FUN_0889f790(u8 *record, u8 first, u16 second)
{
    int equal = 1;

    if (record[0x18c] != first) {
        equal = 0;
    } else if (record[0x18d] != (u8)second) {
        equal = 0;
    }
    return equal;
}
