/*
 * FUN_088c7940: call FUN_088c3aa0 on the global record D_09bb7e70, then FUN_088c768c.
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
void FUN_088c3aa0(void *g, s32 a, s32 b, s32 c);
void FUN_088c768c(void *rec, s32 b, s32 c);

void FUN_088c7940(void *rec, s32 a, s32 b, s32 c)
{
    FUN_088c3aa0(D_09bb7e70, a, b, c);
    FUN_088c768c(rec, b, c);
}
