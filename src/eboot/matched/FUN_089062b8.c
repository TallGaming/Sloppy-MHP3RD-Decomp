/*
 * FUN_089062b8: return the address of offset 0x7C of a record.
 *
 * Main EBOOT, match slice 3 (tiny leaf functions, part 2). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void *FUN_089062b8(void *rec)
{
    return (u8 *)rec + 0x7c;
}
