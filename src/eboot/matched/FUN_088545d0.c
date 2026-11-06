/*
 * FUN_088545d0: call FUN_0885af98 and FUN_08859c4c, then count up D_08a31dfc; return 0.
 *
 * Main EBOOT, match slice 9 (small functions with a frame, no branches, part 1). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern s32 D_08a31dfc; /* Hypothesis: type from the access only. */
s32 FUN_0885af98(void);
void FUN_08859c4c(void);

s32 FUN_088545d0(void)
{
    FUN_0885af98();
    FUN_08859c4c();
    D_08a31dfc++;
    return 0;
}
