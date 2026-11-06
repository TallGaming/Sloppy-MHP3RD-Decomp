/*
 * FUN_0887f1ac: test whether half-word 0x10 of 20-byte entry INDEX in D_089caf8c is non-zero.
 *
 * Main EBOOT, match slice 6 (small straight-line leaf functions, part 1). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

struct Entry_089caf8c
{
    u8 unknown_00[16];
    u16 half_10;
    u16 unknown_12;
};
extern struct Entry_089caf8c D_089caf8c[];

s32 FUN_0887f1ac(void *unused, u16 index)
{
    return D_089caf8c[index].half_10 != 0;
}
