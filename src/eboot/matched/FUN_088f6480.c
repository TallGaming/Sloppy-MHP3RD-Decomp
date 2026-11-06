/*
 * FUN_088f6480: mark a record and submit operation 1 when COUNT is positive.
 *
 * Main EBOOT, G2 high-address branch slice. The record and operation roles are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef unsigned short u16;

void FUN_088f5320(void *context, int operation, u16 value, int count);

void FUN_088f6480(void *context, u16 *record, short count)
{
    if (count < 1)
        return;
    *((u8 *)record + 0x2a) = 4;
    FUN_088f5320(context, 1, *record, (s8)count);
}
