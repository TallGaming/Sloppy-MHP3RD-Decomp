/*
 * FUN_0885afb8: store VALUE at entry INDEX of the word table D_08a333c4 and return 0.
 *
 * Main EBOOT, match slice 4 (tiny functions with global data). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern s32 D_08a333c4[]; /* Hypothesis: type from the access only. */

s32 FUN_0885afb8(s32 index, s32 value)
{
    D_08a333c4[index] = value;
    return 0;
}
