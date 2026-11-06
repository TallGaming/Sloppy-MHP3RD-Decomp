/*
 * FUN_08866a48: return entry INDEX of the 16-bit table at offset 0x51F2.
 *
 * Main EBOOT, plan step 4 (retry of older parked functions under GCC 4.0.4x). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

u16 FUN_08866a48(void *rec, u16 index)
{
    return ((u16 *)((u8 *)rec + 0x51f2))[index];
}
