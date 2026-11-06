/*
 * FUN_08855434: return entry NUMBER (1-based) of the 16-bit table D_0897d52c.
 *
 * Main EBOOT, match slice 4 (tiny functions with global data). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern const u16 D_0897d52c[]; /* Hypothesis: type from the access only. */

u16 FUN_08855434(u8 number)
{
    return D_0897d52c[number - 1];
}
