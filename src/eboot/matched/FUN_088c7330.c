/*
 * FUN_088c7330: run FUN_088dbaf4 on entries 0 and 1 of the global table D_09bc1ac0 with VALUE.
 *
 * Main EBOOT, match slice 11 (small functions with a frame, no branches, part 3). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern void * D_09bc1ac0; /* Hypothesis: type from the access only. */
void FUN_088dbaf4(void *table, s32 index, s32 value);

void FUN_088c7330(void *unused, s32 value)
{
    FUN_088dbaf4(D_09bc1ac0, 0, value);
    FUN_088dbaf4(D_09bc1ac0, 1, value);
}
