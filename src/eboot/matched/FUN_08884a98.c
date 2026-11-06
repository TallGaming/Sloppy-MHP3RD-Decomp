/*
 * FUN_08884a98: round a value up to a multiple of 32 and keep bits 5-9.
 *
 * Main EBOOT, match slice 3 (tiny leaf functions, part 1). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

s32 FUN_08884a98(s32 value)
{
    return (value + 31) & 0x3e0;
}
