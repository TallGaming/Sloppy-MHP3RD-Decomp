/*
 * FUN_089067ec: set flag bits in the 16-bit word at offset 0.
 *
 * Main EBOOT, match slice 3 (tiny leaf functions, part 2). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_089067ec(u16 *flags, u16 mask)
{
    *flags |= mask;
}
