/*
 * FUN_0887e9a8: look up byte 5 of an item in the byte table D_089ca130.
 *
 * Main EBOOT, match slice 4 (tiny functions with global data). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern const u8 D_089ca130[]; /* Hypothesis: type from the access only. */

u8 FUN_0887e9a8(void *unused, const u8 *item)
{
    return D_089ca130[item[5]];
}
