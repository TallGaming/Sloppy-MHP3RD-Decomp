/*
 * FUN_088d78a8: set the method table of an object to D_0896ac68.
 *
 * Main EBOOT, match slice 4 (tiny functions with global data). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern const u8 D_0896ac68; /* Hypothesis: type from the access only. */

void FUN_088d78a8(void **object)
{
    *object = &D_0896ac68;
}
