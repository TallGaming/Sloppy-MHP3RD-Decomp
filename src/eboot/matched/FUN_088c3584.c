/*
 * FUN_088c3584: store the second argument in the global word D_09bea834.
 *
 * Main EBOOT, match slice 4 (tiny functions with global data). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern s32 D_09bea834; /* Hypothesis: type from the access only. */

void FUN_088c3584(void *unused, s32 value)
{
    D_09bea834 = value;
}
