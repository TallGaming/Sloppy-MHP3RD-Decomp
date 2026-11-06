/*
 * FUN_088a6fd8: test whether 16-bit entry INDEX of the table at 0xC2C is positive.
 *
 * Main EBOOT, match slice 3 (tiny leaf functions, part 1). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

s32 FUN_088a6fd8(void *rec, s16 index)
{
    return ((s16 *)((u8 *)rec + 0xc2c))[index] > 0;
}
