/*
 * FUN_088c74f4: translate a small code, then forward it with two saved values.
 *
 * Main EBOOT, G2 small-frame matching. Names and types are hypotheses.
 */

typedef unsigned char u8;
typedef unsigned short u16;
typedef int s32;

extern void *D_09bb7e78;
extern void *D_09bc1ac0;

s32 FUN_088c7480(void *context, u8 code);
s32 FUN_088dbcfc(void *context, s32 value, u16 short_value, s32 code);

s32 FUN_088c74f4(void *unused, s32 value, u16 short_value, u8 code)
{
    s32 translated = FUN_088c7480(D_09bb7e78, code);
    return FUN_088dbcfc(D_09bc1ac0, value, short_value, translated - 21);
}
