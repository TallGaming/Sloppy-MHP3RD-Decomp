/*
 * FUN_088a52b0: test whether a nonzero byte occurs in a ten-entry table.
 *
 * Main EBOOT, G2 leaf-with-branches matching. Names and types are hypotheses.
 * PARKED: the loop matches except for one equality-branch operand order.
 */

typedef unsigned char u8;

int FUN_088a52b0(u8 *record, u8 value)
{
    u8 *scan;
    int index;

    if (value == 0) {
        return 0;
    }
    scan = record;
    index = 0;
    do {
        u8 found = scan[0xc06];
        index++;
        scan++;
        if (value == found) {
            return 1;
        }
    } while (index != 10);
    return 0;
}
