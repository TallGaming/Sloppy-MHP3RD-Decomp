/*
 * FUN_0895c920: call FUN_08878c28 with 0x2F610 and 16.
 *
 * Main EBOOT, match slice 4 (tiny functions with global data). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_08878c28(void *rec, s32 a, s32 b);

void FUN_0895c920(void *rec)
{
    FUN_08878c28(rec, 0x2f610, 16);
}
