/*
 * FUN_088f45e8: initialize three thresholds and their two low-range flags.
 *
 * Main EBOOT, G2 high-address branch slice. The record fields are hypotheses.
 */

typedef unsigned char u8;

void FUN_088f45e8(void *record, int value)
{
    u8 *bytes = record;
    int *words = record;

    bytes[0x0c] = 0;
    bytes[0x0d] = 0;
    words[0] = value;
    words[1] = value;
    words[2] = value;
    bytes[0x0f] = 0;
    if (value < 0x4651)
        bytes[0x0c] = 1;
    if (value < 0x2329)
        bytes[0x0d] = 1;
}
