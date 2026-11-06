/*
 * FUN_0886777c: return FUN_08867704() + 8 as a 16-bit value.
 *
 * Main EBOOT, match slice 10 (small functions with a frame, no branches, part 2). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

s32 FUN_08867704(void);

s16 FUN_0886777c(void)
{
    return FUN_08867704() + 8;
}
