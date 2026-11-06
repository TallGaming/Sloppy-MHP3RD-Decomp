/*
 * FUN_0891a74c: initialize the state and counters of one record.
 *
 * Main EBOOT, attempt-high-01. The record layout and field roles are hypotheses.
 */

typedef unsigned char u8;

void FUN_088f28f4();

void FUN_0891a74c(u8 *record)
{
    FUN_088f28f4();
    *(int *)(record + 0x380) = 0x0f;
    record[0x388] = 1;
    record[0x391] = 0;
    record[0x37c] = 0;
    record[0x37d] = 0;
    *(int *)(record + 0x384) = 0;
    *(int *)(record + 0x38c) = 0;
    record[0x390] = 0;
}
