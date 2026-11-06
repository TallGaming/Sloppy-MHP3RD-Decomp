/*
 * FUN_088be664: pass the value from FUN_088be5d4 to FUN_088f0bd4 on the part at 0x1B10.
 *
 * Main EBOOT, match slice 11 (small functions with a frame, no branches, part 3). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

s32 FUN_088be5d4(void *rec);
void FUN_088f0bd4(void *part, s32 value);

void FUN_088be664(u8 *rec)
{
    FUN_088f0bd4(rec + 0x1b10, FUN_088be5d4(rec));
}
