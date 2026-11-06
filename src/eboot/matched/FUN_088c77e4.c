/*
 * FUN_088c77e4: reset entry INDEX of the global record D_09bb7e70 three ways.
 *
 * Main EBOOT, match slice 11 (small functions with a frame, no branches, part 3). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern void * D_09bb7e70; /* Hypothesis: type from the access only. */
void FUN_088c37bc(void *rec, s32 index);
void FUN_088c37ec(void *rec, s32 index);
void FUN_088c380c(void *rec, s32 index);

void FUN_088c77e4(void *unused, s32 index)
{
    FUN_088c37bc(D_09bb7e70, index);
    FUN_088c380c(D_09bb7e70, index);
    FUN_088c37ec(D_09bb7e70, index);
}
