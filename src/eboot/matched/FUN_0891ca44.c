/*
 * FUN_0891ca44: run FUN_0891c9ec and set state byte 8.
 *
 * Main EBOOT, attempt-high-01 batch 2. Names and record layout are hypotheses.
 */

typedef unsigned char u8;

void FUN_0891c9ec();

void FUN_0891ca44(u8 *record)
{
    FUN_0891c9ec();
    record[8] = 1;
}
