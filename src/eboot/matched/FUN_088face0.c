/*
 * FUN_088face0: call FUN_088f9ce4 with 0.
 *
 * Main EBOOT, match slice 5 (tiny functions that call others). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_088f9ce4(void *rec, s32 value);

void FUN_088face0(void *rec)
{
    FUN_088f9ce4(rec, 0);
}
