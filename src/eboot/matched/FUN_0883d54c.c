/*
 * FUN_0883d54c: call FUN_0883d4a4 with mode 1.
 *
 * Main EBOOT, match slice 5 (tiny functions that call others). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_0883d4a4(void *rec, s32 value, s32 mode);

void FUN_0883d54c(void *rec, s32 value)
{
    FUN_0883d4a4(rec, value, 1);
}
