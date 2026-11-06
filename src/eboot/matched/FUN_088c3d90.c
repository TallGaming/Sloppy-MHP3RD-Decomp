/*
 * FUN_088c3d90: test whether FUN_08854404 of the second argument is positive.
 *
 * Main EBOOT, match slice 11 (small functions with a frame, no branches, part 3). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

s32 FUN_08854404(s32 a);

s32 FUN_088c3d90(void *unused, s32 a)
{
    return FUN_08854404(a) > 0;
}
