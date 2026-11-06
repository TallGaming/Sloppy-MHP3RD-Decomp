/*
 * FUN_088543ec: call FUN_08854700 with two 16-bit values.
 *
 * Main EBOOT, match slice 5 (tiny functions that call others). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_08854700(u16 a, u16 b);

void FUN_088543ec(u16 a, u16 b)
{
    FUN_08854700(a, b);
}
