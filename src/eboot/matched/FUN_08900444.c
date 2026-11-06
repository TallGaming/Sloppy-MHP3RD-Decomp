/*
 * FUN_08900444: call FUN_089003ec with the word at offset 0 inserted as the second argument.
 *
 * Main EBOOT, match slice 5 (tiny functions that call others). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_089003ec(s32 *rec, s32 first, s32 a, s16 b, s16 c);

void FUN_08900444(s32 *rec, s32 a, s16 b, s16 c)
{
    FUN_089003ec(rec, rec[0], a, b, c);
}
