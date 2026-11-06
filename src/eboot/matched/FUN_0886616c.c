/*
 * FUN_0886616c: count a call in word 8, run FUN_08865fd4 for slots 2 and 0, return word 4.
 *
 * Main EBOOT, match slice 10 (small functions with a frame, no branches, part 2). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_08865fd4(s32 index);

s32 FUN_0886616c(s32 a, s32 b, s32 c, s32 *rec)
{
    rec[2]++;
    FUN_08865fd4(2);
    FUN_08865fd4(0);
    return rec[1];
}
