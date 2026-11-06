/*
 * FUN_0883c4f8: test whether a string is not empty (first byte not zero).
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

s32 FUN_0883c4f8(const u8 *s)
{
    return s[0] != 0;
}
