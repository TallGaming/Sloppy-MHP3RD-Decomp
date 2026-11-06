/*
 * FUN_088c3d5c: test whether FUN_0885446c (four arguments after the first) is positive.
 *
 * Main EBOOT, match slice 11 (small functions with a frame, no branches, part 3). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

s32 FUN_0885446c(s32 a, s32 b, s32 c, s32 e);

s32 FUN_088c3d5c(void *unused, s32 a, s32 b, s32 c, s32 e)
{
    return FUN_0885446c(a, b, c, e) > 0;
}
