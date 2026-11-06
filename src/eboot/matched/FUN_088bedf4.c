/*
 * FUN_088bedf4: call FUN_088f64e0 on the part at 0x1820.
 *
 * Main EBOOT, match slice 5 (tiny functions that call others). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_088f64e0(void *part, u16 a, s16 b);

void FUN_088bedf4(void *rec, u16 a, s16 b)
{
    FUN_088f64e0((u8 *)rec + 0x1820, a, b);
}
