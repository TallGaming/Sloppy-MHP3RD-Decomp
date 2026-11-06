/*
 * FUN_088569ec: return slot INDEX (< 128) of the table at 0x6998, else 0.
 *
 * Main EBOOT, match slice 8 (small leaf functions with branches, part 1). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

s32 FUN_088569ec(u8 *rec, u32 index)
{
    if (index < 128)
        return ((s32 *)(rec + 0x6998))[index];
    return 0;
}
