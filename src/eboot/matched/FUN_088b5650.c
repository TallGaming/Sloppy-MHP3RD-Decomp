/*
 * FUN_088b5650: run four update steps on the global object D_09beb0a8.
 *
 * Main EBOOT, match slice 11 (small functions with a frame, no branches, part 3). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern void * D_09beb0a8; /* Hypothesis: type from the access only. */
void FUN_088f933c(void *o, s32 a);
void FUN_088f923c(void *o);
void FUN_088f9a58(void *o, s32 a);
void FUN_088f98dc(void *o);

void FUN_088b5650(void)
{
    FUN_088f933c(D_09beb0a8, 0);
    FUN_088f923c(D_09beb0a8);
    FUN_088f9a58(D_09beb0a8, 0);
    FUN_088f98dc(D_09beb0a8);
}
