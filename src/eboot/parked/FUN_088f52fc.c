/*
 * FUN_088f52fc: select byte 0x23D for mode zero or byte 0x23C otherwise.
 *
 * Main EBOOT, G2 high-address branch slice. The record and mode roles are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;

u8 FUN_088f52fc(u8 *record, s8 mode)
{
    if (mode != 0)
        return record[0x23c];
    return record[0x23d];
}
