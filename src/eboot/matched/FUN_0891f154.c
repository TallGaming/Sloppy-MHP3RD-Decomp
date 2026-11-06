/*
 * FUN_0891f154: reset a record: byte 0x579 to 4 and four state bytes to 0.
 *
 * Main EBOOT, match slice 3 (tiny leaf functions, part 2). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_0891f154(u8 *rec)
{
    /* Match note: this store order gives the reference schedule. */
    rec[0x579] = 4;
    rec[5] = 0;
    rec[6] = 0;
    rec[18] = 0;
    rec[4] = 0;
}
