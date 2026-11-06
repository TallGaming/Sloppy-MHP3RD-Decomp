/*
 * FUN_088e6f44: store word VALUE at entry INDEX of the table at 0x16C.
 *
 * Main EBOOT, match slice 3 (tiny leaf functions, part 2). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_088e6f44(void *rec, s32 index, s32 value)
{
    ((s32 *)((u8 *)rec + 0x16c))[index] = value;
}
