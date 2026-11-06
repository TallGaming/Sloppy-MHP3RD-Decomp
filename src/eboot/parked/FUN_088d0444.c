/*
 * FUN_088d0444: invoke an encoded C++ member-function pointer when present.
 *
 * Main EBOOT, G2 small-function matching. Names and types are hypotheses.
 * PARKED: GCC selects different registers and hoists the adjusted `this`
 * argument across the virtual/nonvirtual branch after three plain attempts.
 */

typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;
typedef void (*MemberFunction_088d0444)(void *);

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

void FUN_088d0444(u8 *object)
{
    MemberFunction_088d0444 method =
        FIELD(object, MemberFunction_088d0444, 0x10c);

    if (method != 0) {
        s32 encoding = FIELD(object, s32, 0x110);
        u8 *adjusted = object + (encoding >> 1);

        if (encoding & 1) {
            u8 *methods = *(u8 **)adjusted;
            method = *(MemberFunction_088d0444 *)(methods + (u32)method);
            method(adjusted);
        } else {
            method(adjusted);
        }
    }
}
