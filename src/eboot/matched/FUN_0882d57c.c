/*
 * FUN_0882d57c: test whether the second argument fits in 16 bits.
 *
 * Main EBOOT, match slice 1 (tiny functions). Names and types are
 * hypotheses unless stated.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

s32 FUN_0882d57c(void *unused, u32 value)
{
    return value <= 0xffff;
}
