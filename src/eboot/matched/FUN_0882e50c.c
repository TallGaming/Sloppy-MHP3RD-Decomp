/*
 * FUN_0882e50c: test whether the global 16-bit value at 0x08A29932 differs from a byte.
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

extern u16 D_08a29932; /* Hypothesis: name and type from the access width only. */

s32 FUN_0882e50c(u8 value)
{
    return D_08a29932 != value;
}
