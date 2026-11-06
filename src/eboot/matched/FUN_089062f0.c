/*
 * FUN_089062f0: return signed byte INDEX of the table at 0x6E.
 *
 * Main EBOOT, match slice 3 (tiny leaf functions, part 2). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

s8 FUN_089062f0(s8 *rec, u8 index)
{
    return rec[index + 0x6e];
}
