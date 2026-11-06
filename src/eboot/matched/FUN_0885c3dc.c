/*
 * FUN_0885c3dc: return the address of 40-byte element J of block INDEX in the pointer table D_0897d9a0.
 *
 * Main EBOOT, match slice 6 (small straight-line leaf functions, part 1). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern u8 *D_0897d9a0[];

void *FUN_0885c3dc(void *unused, u8 index, s16 j)
{
    return D_0897d9a0[index] + j * 40;
}
