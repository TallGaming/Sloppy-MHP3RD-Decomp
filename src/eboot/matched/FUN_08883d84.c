/*
 * FUN_08883d84: clear the global word D_08ab156c.
 *
 * Main EBOOT, match slice 4 (tiny functions with global data). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern void * D_08ab156c; /* Hypothesis: type from the access only. */

void FUN_08883d84(void)
{
    D_08ab156c = 0;
}
