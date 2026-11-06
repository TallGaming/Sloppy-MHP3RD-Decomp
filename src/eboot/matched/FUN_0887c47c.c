/*
 * FUN_0887c47c: swap the two bytes of a 16-bit value.
 *
 * Main EBOOT, match slice 3 (tiny leaf functions, part 1). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

u16 FUN_0887c47c(u16 value)
{
    return (u16)((value << 8) | (value >> 8));
}
