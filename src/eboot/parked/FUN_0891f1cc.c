/*
 * FUN_0891f1cc: test whether either state byte 4 or 0xB91 is nonzero.
 *
 * Main EBOOT, attempt-high-01 batch 2. The state fields are hypotheses.
 */

typedef unsigned char u8;

int FUN_0891f1cc(u8 *record)
{
    return record[4] != 0 || record[0xb91] != 0;
}
