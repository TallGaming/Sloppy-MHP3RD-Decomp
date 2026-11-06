/*
 * FUN_088c3aa0: call FUN_08854354 with VALUE, then store VALUE at offset 8.
 *
 * Main EBOOT, match slice 11 (small functions with a frame, no branches, part 3). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_08854354(s32 value);

void FUN_088c3aa0(s32 *rec, s32 value)
{
    FUN_08854354(value);
    rec[2] = value;
}
