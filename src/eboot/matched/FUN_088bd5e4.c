/*
 * FUN_088bd5e4: call FUN_0894a8c4 on the part at 0x21FC with a signed byte.
 *
 * Main EBOOT, match slice 5 (tiny functions that call others). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_0894a8c4(void *part, s32 a, s8 b);

void FUN_088bd5e4(void *rec, s32 a, s8 b)
{
    FUN_0894a8c4((u8 *)rec + 0x21fc, a, b);
}
