/*
 * FUN_088be840: call FUN_088f45b4 on the part at 0x21C4 with a byte.
 *
 * Main EBOOT, match slice 5 (tiny functions that call others). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_088f45b4(void *part, u8 value);

void FUN_088be840(void *rec, u8 value)
{
    FUN_088f45b4((u8 *)rec + 0x21c4, value);
}
