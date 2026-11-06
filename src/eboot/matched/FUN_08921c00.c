/*
 * FUN_08921c00: advance state 1 or 2 to state 3 and initialize its subrecord.
 *
 * Main EBOOT, attempt-high-01 batch 2. The state and subrecord roles are hypotheses.
 */

typedef unsigned char u8;

void FUN_088fade0(void *subrecord, int value);

void FUN_08921c00(u8 *record)
{
    if ((u8)(record[0x6d4] - 1) < 2) {
        record[0x6d4] = 3;
        record[0x6d5] = 0;
        FUN_088fade0(record + 0x6d8, 0x1e);
    }
}
