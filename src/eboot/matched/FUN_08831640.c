/*
 * FUN_08831640: call FUN_0883942c with 0 first; return 0.
 *
 * Main EBOOT, match slice 9 (small functions with a frame, no branches, part 1). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_0883942c(s32 kind, s32 a, s32 b);

s32 FUN_08831640(s32 a, s32 b)
{
    FUN_0883942c(0, a, b);
    return 0;
}
