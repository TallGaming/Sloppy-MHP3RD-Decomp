/*
 * FUN_08921c40: set state 1 and initialize its subrecord through two helpers.
 *
 * Main EBOOT, attempt-high-01 batch 2. The state and subrecord roles are hypotheses.
 */

typedef unsigned char u8;

void FUN_088fade0(void *subrecord, int value);
void FUN_08903d30(void *subrecord, int value);

void FUN_08921c40(u8 *record)
{
    record[0x6d4] = 1;
    FUN_088fade0(record + 0x6d8, 0);
    FUN_08903d30(record + 0x6d8, 1);
}
