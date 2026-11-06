/*
 * FUN_088bdc54: call FUN_088f0048 and FUN_088f0110 on the part at 0x1B10.
 *
 * Main EBOOT, match slice 11 (small functions with a frame, no branches, part 3). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_088f0048(void *part);
void FUN_088f0110(void *part);

void FUN_088bdc54(u8 *rec)
{
    u8 *part = rec + 0x1b10;

    FUN_088f0048(part);
    FUN_088f0110(part);
}
