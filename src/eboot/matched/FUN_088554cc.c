/*
 * FUN_088554cc: return entry INDEX of the 16-bit table D_0897d5dc.
 *
 * Main EBOOT, match slice 4 (tiny functions with global data). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern const u16 D_0897d5dc[]; /* Hypothesis: type from the access only. */

u16 FUN_088554cc(void *unused, u16 index)
{
    return D_0897d5dc[index];
}
