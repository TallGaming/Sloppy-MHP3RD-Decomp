/*
 * FUN_088be6a8: call FUN_088f44d0 on the part at 0x21C4.
 *
 * Main EBOOT, match slice 5 (tiny functions that call others). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

s32 FUN_088f44d0(void *part);

s32 FUN_088be6a8(void *rec)
{
    return FUN_088f44d0((u8 *)rec + 0x21c4);
}
