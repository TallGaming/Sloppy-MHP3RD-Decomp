/*
 * FUN_08880168: test whether FUN_08880020(rec, 1) is at least 20.
 *
 * Main EBOOT, match slice 10 (small functions with a frame, no branches, part 2). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

s32 FUN_08880020(void *rec, s32 mode);

s32 FUN_08880168(void *rec)
{
    return FUN_08880020(rec, 1) >= 20;
}
