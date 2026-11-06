/*
 * FUN_088bc2cc: clear a three-byte record field.
 *
 * Main EBOOT, G2 leaf-with-branches matching. Names and types are hypotheses.
 */

typedef unsigned char u8;

void FUN_088bc2cc(u8 *record)
{
    int index = 0;

    do {
        index++;
        record[0x21e0] = 0;
        record++;
    } while (index != 3);
}
