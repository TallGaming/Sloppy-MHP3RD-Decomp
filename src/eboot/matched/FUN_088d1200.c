/*
 * FUN_088d1200: return the address of offset 0x2C of a record.
 *
 * Main EBOOT, match slice 3 (tiny leaf functions, part 2). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void *FUN_088d1200(void *rec)
{
    return (u8 *)rec + 0x2c;
}
