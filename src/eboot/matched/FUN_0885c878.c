/*
 * FUN_0885c878: return the second byte of pair INDEX in D_089660c8.
 *
 * Main EBOOT, match slice 4 (tiny functions with global data). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

struct Pair_089660c8
{
    u8 first;
    u8 second;
};
extern const struct Pair_089660c8 D_089660c8[];

u8 FUN_0885c878(void *unused, u8 index)
{
    return D_089660c8[index].second;
}
