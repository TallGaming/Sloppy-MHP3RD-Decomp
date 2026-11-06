/*
 * FUN_088ce51c: return word INDEX of the table at 0x9A34.
 *
 * Main EBOOT, match slice 3 (tiny leaf functions, part 2). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

s32 FUN_088ce51c(void *rec, u8 index)
{
    return ((s32 *)((u8 *)rec + 0x9a34))[index];
}
