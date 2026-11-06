/*
 * FUN_0886624c: test bit BIT of the 16-bit bit set at 0x984.
 *
 * Main EBOOT, match slice 6 (small straight-line leaf functions, part 1). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

s32 FUN_0886624c(void *rec, s32 bit)
{
    return (((u16 *)((u8 *)rec + 0x984))[bit / 16] >> (bit & 15)) & 1;
}
