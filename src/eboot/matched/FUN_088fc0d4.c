/*
 * FUN_088fc0d4: return entry INDEX of the byte table D_089f6d1c.
 *
 * Main EBOOT, match slice 4 (tiny functions with global data). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern const u8 D_089f6d1c[]; /* Hypothesis: type from the access only. */

u8 FUN_088fc0d4(void *unused, u8 index)
{
    return D_089f6d1c[index];
}
