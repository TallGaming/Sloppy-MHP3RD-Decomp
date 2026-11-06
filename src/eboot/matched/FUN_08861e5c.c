/*
 * FUN_08861e5c: call FUN_08861dc4 with 0 inserted, then set three bytes to -1.
 *
 * Main EBOOT, match slice 9 (small functions with a frame, no branches, part 1). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_08861dc4(void *rec, s32 a, s32 zero, s32 b);

void FUN_08861e5c(s8 *rec, s32 a, s32 b)
{
    FUN_08861dc4(rec, a, 0, b);
    rec[40] = -1;
    rec[41] = -1;
    rec[42] = -1;
}
