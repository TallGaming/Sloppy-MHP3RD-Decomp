/*
 * FUN_0885afa4: store a value in D_08a333c0 and return 0.
 *
 * Main EBOOT, match slice 4 (tiny functions with global data). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern s32 D_08a333c0; /* Hypothesis: type from the access only. */

s32 FUN_0885afa4(s32 value)
{
    D_08a333c0 = value;
    return 0;
}
