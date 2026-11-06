/*
 * FUN_0883c508: make a string empty (store zero in its first byte).
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

void FUN_0883c508(u8 *s)
{
    s[0] = 0;
}
