/*
 * FUN_0882e528: test whether the global signed byte at 0x08A29938 differs from a value.
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

extern s8 D_08a29938; /* Hypothesis: name and type from the access width only. */

s32 FUN_0882e528(s8 value)
{
    return D_08a29938 != value;
}
