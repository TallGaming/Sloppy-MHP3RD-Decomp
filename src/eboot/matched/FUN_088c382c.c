/*
 * FUN_088c382c: reset entry INDEX three ways (FUN_088c37bc, FUN_088c37ec, FUN_088c380c).
 *
 * Main EBOOT, match slice 11 (small functions with a frame, no branches, part 3). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_088c37bc(void *rec, s32 index);
void FUN_088c37ec(void *rec, s32 index);
void FUN_088c380c(void *rec, s32 index);

void FUN_088c382c(void *rec, s32 index)
{
    FUN_088c37bc(rec, index);
    FUN_088c37ec(rec, index);
    FUN_088c380c(rec, index);
}
