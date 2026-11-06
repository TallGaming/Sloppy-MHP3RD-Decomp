/*
 * FUN_088ef260: store a value in the global word D_09beb088.
 *
 * Main EBOOT, match slice 4 (tiny functions with global data). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern s32 D_09beb088; /* Hypothesis: type from the access only. */

s32 FUN_088ef260(s32 value)
{
    D_09beb088 = value;
    return 0;
}
