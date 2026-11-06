/*
 * FUN_088bcd44: return the global word D_08a33efc.
 *
 * Main EBOOT, match slice 4 (tiny functions with global data). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern s32 D_08a33efc; /* Hypothesis: type from the access only. */

s32 FUN_088bcd44(void)
{
    return D_08a33efc;
}
