/*
 * FUN_0888e824: return the first word of the record from FUN_0888e7b4.
 *
 * Main EBOOT, match slice 10 (small functions with a frame, no branches, part 2). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

s32 *FUN_0888e7b4(void);

s32 FUN_0888e824(void)
{
    return *FUN_0888e7b4();
}
