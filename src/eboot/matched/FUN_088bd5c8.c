/*
 * FUN_088bd5c8: call FUN_0894a9f8 on the part at 0x21FC.
 *
 * Main EBOOT, match slice 5 (tiny functions that call others). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_0894a9f8();

void FUN_088bd5c8(void *rec)
{
    FUN_0894a9f8((u8 *)rec + 0x21fc);
}
