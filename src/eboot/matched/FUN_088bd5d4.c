/*
 * FUN_088bd5d4: call FUN_0894a954 on the part at 0x21FC with a byte.
 *
 * Main EBOOT, match slice 5 (tiny functions that call others). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_0894a954(void *part, u8 value);

void FUN_088bd5d4(void *rec, u8 value)
{
    FUN_0894a954((u8 *)rec + 0x21fc, value);
}
