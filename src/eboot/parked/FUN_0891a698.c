/*
 * FUN_0891a698: test whether both state bytes 0x37C and 0x37D are set.
 *
 * Main EBOOT, attempt-high-01. The state fields are hypotheses.
 */

typedef unsigned char u8;

int FUN_0891a698(u8 *record)
{
    if (record[0x37c] == 0 || record[0x37d] == 0)
        return 0;
    return 1;
}
