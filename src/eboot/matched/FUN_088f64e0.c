/*
 * FUN_088f64e0: submit operation 4 when COUNT is positive.
 *
 * Main EBOOT, G2 high-address branch slice. Parameter roles are hypotheses.
 */

typedef signed char s8;
typedef unsigned short u16;

void FUN_088f5320(void *context, int operation, u16 value, int count);

void FUN_088f64e0(void *context, u16 value, short count)
{
    if (count < 1)
        return;
    FUN_088f5320(context, 4, value, (s8)count);
}
