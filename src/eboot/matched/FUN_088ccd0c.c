/*
 * FUN_088ccd0c: return 5097 + 2 * FUN_088ccce8(), as a 16-bit value.
 *
 * Main EBOOT, match slice 11 (small functions with a frame, no branches, part 3). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

u8 FUN_088ccce8(void);

u16 FUN_088ccd0c(void)
{
    return FUN_088ccce8() * 2 + 5097;
}
