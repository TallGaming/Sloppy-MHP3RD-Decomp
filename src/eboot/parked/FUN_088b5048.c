/*
 * FUN_088b5048: invoke an encoded C++ member-function pointer when present.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 * PARKED: GCC selects different registers for the encoded member call.
 */

typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;
typedef void (*MemberFunction_088b5048)(void *);

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

void FUN_088b5048(u8 *object)
{
    MemberFunction_088b5048 method = FIELD(object, MemberFunction_088b5048, 0);
    if (method != 0) {
        s32 encoding = FIELD(object, s32, 4);
        u8 *adjusted = object + (encoding >> 1);

        if (encoding & 1) {
            u8 *methods = *(u8 **)adjusted;
            method = *(MemberFunction_088b5048 *)(methods + (u32)method);
            method(adjusted);
        } else {
            method(adjusted);
        }
    }
}
