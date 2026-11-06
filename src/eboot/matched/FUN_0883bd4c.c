/*
 * FUN_0883bd4c: clear the 16-bit value that the second argument points to.
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

void FUN_0883bd4c(void *unused, u16 *value)
{
    *value = 0;
}
