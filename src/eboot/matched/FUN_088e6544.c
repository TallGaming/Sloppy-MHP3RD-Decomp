/*
 * FUN_088e6544: test whether entry INDEX of the 16-bit table at 0x10FA358 equals VALUE.
 *
 * Main EBOOT, match slice 7 (small straight-line leaf functions, part 2). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

s32 FUN_088e6544(u8 *rec, u16 value, s32 index)
{
    return ((u16 *)(rec + 0x10fa358))[index] == value;
}
