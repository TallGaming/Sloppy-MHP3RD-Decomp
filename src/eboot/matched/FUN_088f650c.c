/*
 * FUN_088f650c: call FUN_088f5320 with mode 3, a 16-bit value and 1.
 *
 * Main EBOOT, match slice 5 (tiny functions that call others). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_088f5320(void *rec, s32 mode, u16 value, s32 flag);

void FUN_088f650c(void *rec, u16 value)
{
    FUN_088f5320(rec, 3, value, 1);
}
