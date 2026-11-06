/*
 * FUN_0887d7cc: call FUN_0887d78c with a 16-bit value.
 *
 * Main EBOOT, match slice 5 (tiny functions that call others). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_0887d78c(void *rec, u16 value);

void FUN_0887d7cc(void *rec, u16 value)
{
    FUN_0887d78c(rec, value);
}
