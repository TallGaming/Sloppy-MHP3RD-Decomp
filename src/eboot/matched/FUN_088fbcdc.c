/*
 * FUN_088fbcdc: return entry INDEX of the word table D_089f8730.
 *
 * Main EBOOT, match slice 4 (tiny functions with global data). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern const s32 D_089f8730[]; /* Hypothesis: type from the access only. */

s32 FUN_088fbcdc(void *unused, s32 index)
{
    return D_089f8730[index];
}
