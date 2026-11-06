/*
 * FUN_0886232c: return the address of D_08966378.
 *
 * Main EBOOT, match slice 4 (tiny functions with global data). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern u8 D_08966378; /* Hypothesis: type from the access only. */

void *FUN_0886232c(void)
{
    return &D_08966378;
}
