/*
 * FUN_088bc2b8: set byte INDEX of the table at 0x21E5 to 127.
 *
 * Main EBOOT, match slice 3 (tiny leaf functions, part 1). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_088bc2b8(u8 *rec, s32 index)
{
    /* Match note: one index sum gives the reference operand order. */
    rec[index + 0x21e5] = 127;
}
