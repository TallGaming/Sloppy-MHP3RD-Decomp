/*
 * FUN_088bf42c: locate a seven-bit value in a three-entry record array.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 * PARKED: otherwise matching loop retains one commutative operand-order difference.
 */

typedef unsigned char u8;

int FUN_088bf42c(u8 *record, unsigned int value)
{
    int i;

    for (i = 0; i < 3; i++) {
        u8 *entry = i + record;

        if ((entry[0x21e5] & 0x7f) == value) {
            return i;
        }
    }
    return -1;
}
