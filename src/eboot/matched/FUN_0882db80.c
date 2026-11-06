/*
 * FUN_0882db80: test whether a 16-bit character is a lower-case ASCII letter.
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

s32 FUN_0882db80(void *unused, u16 c)
{
    return (u16)(c - 'a') < 26;
}
