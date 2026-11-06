/*
 * FUN_088c45d8: call FUN_088543fc with the second argument.
 *
 * Main EBOOT, match slice 5 (tiny functions that call others). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_088543fc(s32 value);

void FUN_088c45d8(void *unused, s32 value)
{
    FUN_088543fc(value);
}
