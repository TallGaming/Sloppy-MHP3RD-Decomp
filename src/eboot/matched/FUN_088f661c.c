/*
 * FUN_088f661c: report whether FUN_088f65f0 accepts the supplied values.
 *
 * Main EBOOT, G2 high-address slice. Names and types are hypotheses.
 */

typedef unsigned char u8;
typedef unsigned short u16;
typedef int s32;

s32 FUN_088f65f0(void *context, u16 value, u8 mode);

s32 FUN_088f661c(void *context, u16 value, u8 mode)
{
    return FUN_088f65f0(context, value, mode) != 0;
}
