/*
 * FUN_0890d550: clear bytes 0, 2 and 3 of a record.
 *
 * Main EBOOT, match slice 3 (tiny leaf functions, part 2). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_0890d550(u8 *rec)
{
    rec[0] = 0;
    rec[2] = 0;
    rec[3] = 0;
}
