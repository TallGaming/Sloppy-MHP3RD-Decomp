/*
 * FUN_088a60d4: clear three parallel ten-byte tables.
 *
 * Main EBOOT, G2 leaf-with-branches matching. Names and types are hypotheses.
 */

typedef unsigned char u8;

void FUN_088a60d4(u8 *record)
{
    int index = 0;

    do {
        index++;
        record[0xc06] = 0;
        record[0xbc0] = 0;
        record[0xbca] = 0;
        record++;
    } while (index != 10);
}
