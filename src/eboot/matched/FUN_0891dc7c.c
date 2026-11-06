/*
 * FUN_0891dc7c: return entry INDEX of the word table D_08a05620.
 *
 * Main EBOOT, match slice 4 (tiny functions with global data). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern const s32 D_08a05620[]; /* Hypothesis: type from the access only. */

s32 FUN_0891dc7c(void *unused, s32 index)
{
    return D_08a05620[index];
}
