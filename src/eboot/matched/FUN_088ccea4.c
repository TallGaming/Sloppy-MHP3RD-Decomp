/*
 * FUN_088ccea4: return entry INDEX of the byte table D_09c3edcc.
 *
 * Main EBOOT, match slice 4 (tiny functions with global data). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern const u8 D_09c3edcc[]; /* Hypothesis: type from the access only. */

u8 FUN_088ccea4(void *unused, u8 index)
{
    return D_09c3edcc[index];
}
