/*
 * FUN_088c3bd8: call FUN_0885437c with the second argument.
 *
 * Main EBOOT, match slice 5 (tiny functions that call others). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_0885437c(s32 value);

void FUN_088c3bd8(void *unused, s32 value)
{
    FUN_0885437c(value);
}
