/*
 * FUN_088c3f44: call FUN_08854374 with the second and third arguments.
 *
 * Main EBOOT, match slice 5 (tiny functions that call others). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_08854374(s32 a, s32 b);

void FUN_088c3f44(void *unused, s32 a, s32 b)
{
    FUN_08854374(a, b);
}
