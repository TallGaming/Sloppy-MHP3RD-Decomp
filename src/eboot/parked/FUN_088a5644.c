/*
 * FUN_088a5644: find a byte key and return its parallel-table value.
 *
 * Main EBOOT, G2 leaf-with-branches matching. Names and types are hypotheses.
 * PARKED: GCC keeps a different pointer/counter loop representation.
 */

typedef unsigned char u8;

u8 FUN_088a5644(u8 *record, u8 key)
{
    u8 *scan = record;
    int index;

    for (index = 0; index < 10; index++) {
        u8 found = scan[0xbc0];
        scan++;
        if (found == key) {
            return record[0xc06 + index];
        }
    }
    return 0;
}
