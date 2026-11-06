/*
 * FUN_0892c314: reset the global subrecord at 0x09BEE52C and clear its state word.
 *
 * Main EBOOT, attempt-high-01 batch 3. The global record roles are hypotheses.
 */

void FUN_088f9ce4(void *record, int value);
void FUN_08902688(void *record, int value);

void FUN_0892c314(void)
{
    FUN_088f9ce4((void *)0x09bee52c, 0);
    FUN_08902688((void *)0x09bee52c, 1);
    *(int *)0x09bee528 = 0;
}
