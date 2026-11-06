/*
 * FUN_0886638c: clear the global pointer D_08aace80.
 *
 * Main EBOOT, match slice 4 (tiny functions with global data). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern void * D_08aace80; /* Hypothesis: type from the access only. */

void FUN_0886638c(void)
{
    D_08aace80 = 0;
}
