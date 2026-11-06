/*
 * FUN_088ccd38: return (5098 + 2 * FUN_088ccce8()) with bit 0 clear, as a 16-bit value.
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

u16 FUN_088ccd38(void)
{
    return (FUN_088ccce8() * 2 + 5098) & 0xfffe;
}
