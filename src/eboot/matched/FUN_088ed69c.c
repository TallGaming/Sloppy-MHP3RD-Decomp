/*
 * FUN_088ed69c: store a value in the global word D_09be9f28.
 *
 * Main EBOOT, match slice 4 (tiny functions with global data). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern s32 D_09be9f28; /* Hypothesis: type from the access only. */

void FUN_088ed69c(s32 value)
{
    D_09be9f28 = value;
}
