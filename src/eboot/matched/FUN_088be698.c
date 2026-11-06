/*
 * FUN_088be698: call FUN_088f650c on the part at 0x1820 with a 16-bit value.
 *
 * Main EBOOT, match slice 5 (tiny functions that call others). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_088f650c(void *part, s16 value);

void FUN_088be698(void *rec, s16 value)
{
    FUN_088f650c((u8 *)rec + 0x1820, value);
}
