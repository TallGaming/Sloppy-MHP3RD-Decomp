/*
 * FUN_0888e800: return the address 8 bytes into the record from FUN_0888e7b4.
 *
 * Main EBOOT, match slice 10 (small functions with a frame, no branches, part 2). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

u8 *FUN_0888e7b4(void);

void *FUN_0888e800(void)
{
    return FUN_0888e7b4() + 8;
}
