/*
 * FUN_0891f064: store MODE and set its valid flag unless it is -1.
 *
 * Main EBOOT, attempt-high-01 batch 2. The fields and sentinel are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;

void FUN_0891f064(u8 *record, s8 mode)
{
    record[0x1d5] = mode;
    if (mode == -1) {
        record[0x1d4] = 0;
        return;
    }
    record[0x1d4] = 1;
}
