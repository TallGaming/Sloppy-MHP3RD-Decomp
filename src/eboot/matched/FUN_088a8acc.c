/*
 * FUN_088a8acc: call FUN_088a042c with a byte, then store the byte at 0x1412.
 *
 * Main EBOOT, match slice 11 (small functions with a frame, no branches, part 3). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_088a042c(void *rec, u8 value);

void FUN_088a8acc(u8 *rec, u8 value)
{
    FUN_088a042c(rec, value);
    rec[0x1412] = value;
}
