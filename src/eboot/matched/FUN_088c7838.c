/*
 * FUN_088c7838: call FUN_088c3944 on the global record D_09bb7e70, then FUN_088c755c.
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
void FUN_088c3944(void *g, s32 a, s8 b);
void FUN_088c755c(void *rec, s8 b);

void FUN_088c7838(void *rec, s32 a, s8 b)
{
    FUN_088c3944(D_09bb7e70, a, b);
    FUN_088c755c(rec, b);
}
