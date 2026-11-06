/*
 * FUN_08921d38: clear two state bytes and reset its subrecord through two helpers.
 *
 * Main EBOOT, attempt-high-01 batch 2. The state and subrecord roles are hypotheses.
 */

typedef unsigned char u8;

void FUN_08902548(void *subrecord, int value);
void FUN_08903d30(void *subrecord, int value);

void FUN_08921d38(u8 *record)
{
    record[0x6d5] = 0;
    record[0x6d4] = 0;
    FUN_08902548(record + 0x6d8, 0);
    FUN_08903d30(record + 0x6d8, 1);
}
