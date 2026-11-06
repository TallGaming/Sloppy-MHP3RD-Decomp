/*
 * FUN_088303e0: call FUN_08830378 with 6 as the second argument.
 *
 * Main EBOOT, match slice 1 (tiny functions). Names and types are
 * hypotheses unless stated.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_08830378(void *a, s32 kind, s32 b); /* Hypothesis */

void FUN_088303e0(void *a, s32 b)
{
    FUN_08830378(a, 6, b);
}
