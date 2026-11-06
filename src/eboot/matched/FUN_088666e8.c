/*
 * FUN_088666e8: return entry INDEX of the 16-bit table at offset 0x515C.
 *
 * Main EBOOT, plan step 4 (retry of older parked functions under GCC 4.0.4x). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

u16 FUN_088666e8(void *rec, u8 index)
{
    return ((u16 *)((u8 *)rec + 0x515c))[index];
}
