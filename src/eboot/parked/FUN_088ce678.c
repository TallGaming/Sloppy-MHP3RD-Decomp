/*
 * FUN_088ce678: return signed byte INDEX of the table at 0x9A68.
 *
 * Main EBOOT, match slice 3 (tiny leaf functions, part 2). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

s8 FUN_088ce678(void *rec, u8 index)
{
    return ((s8 *)((u8 *)rec + 0x9a68))[index];
}
