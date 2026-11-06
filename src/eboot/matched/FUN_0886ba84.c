/*
 * FUN_0886ba84: test FUN_0886b7bc with mode 4.
 *
 * Main EBOOT, match slice 10 (small functions with a frame, no branches, part 2). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

s32 FUN_0886b7bc(void *rec, s32 mode);

s32 FUN_0886ba84(void *rec)
{
    return FUN_0886b7bc(rec, 4) != 0;
}
