/*
 * FUN_08866abc: return entry INDEX of a 16-bit table at offset 0x5288 of a record.
 *
 * Main EBOOT, match slice 3 (tiny leaf functions, part 1). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

u16 FUN_08866abc(void *rec, u16 index)
{
    return ((u16 *)((u8 *)rec + 0x5288))[index];
}
