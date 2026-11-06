/*
 * FUN_0893b37c: initialize a record, install its table and clear two fields.
 *
 * Main EBOOT, attempt-high-01 batch 3. The initializer and record layout are hypotheses.
 */

typedef unsigned char u8;
typedef unsigned short u16;

void FUN_09c02058();

void FUN_0893b37c(u8 *record)
{
    FUN_09c02058();
    *(u16 *)(record + 0xec) = 0xffff;
    *(void **)record = (void *)0x0896b9a8;
    *(int *)(record + 0xe8) = 0;
}
