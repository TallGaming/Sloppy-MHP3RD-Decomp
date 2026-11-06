/*
 * FUN_08861ea0: call FUN_08861dc4 with 0 inserted, then clear three bytes.
 *
 * Main EBOOT, match slice 10 (small functions with a frame, no branches, part 2). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_08861dc4(void *rec, s32 a, s32 zero, s32 b);

void FUN_08861ea0(u8 *rec, s32 a, s32 b)
{
    FUN_08861dc4(rec, a, 0, b);
    rec[40] = 0;
    rec[41] = 0;
    rec[42] = 0;
}
