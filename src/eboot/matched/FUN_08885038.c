/*
 * FUN_08885038: clear the global pointer D_09bf5250.
 *
 * Main EBOOT, match slice 4 (tiny functions with global data). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern void * D_09bf5250; /* Hypothesis: type from the access only. */

void FUN_08885038(void)
{
    D_09bf5250 = 0;
}
