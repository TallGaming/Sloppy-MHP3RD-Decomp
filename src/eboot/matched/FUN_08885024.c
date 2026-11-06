/*
 * FUN_08885024: return the address of offset 0x366 of the record D_09bf5250 points to.
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

void *FUN_08885024(void)
{
    return (u8 *)D_09bf5250 + 0x366;
}
