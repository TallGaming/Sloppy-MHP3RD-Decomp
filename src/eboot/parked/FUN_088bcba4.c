/*
 * FUN_088bcba4: forward a signed-byte value to an owned object when present.
 *
 * Main EBOOT, G2 leaf-with-branches matching. Names and types are hypotheses.
 * PARKED: GCC removes a byte mask and lowers the indirect tail call differently.
 */

typedef unsigned char u8;
typedef signed char s8;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

struct Object_088bcba4;
struct Methods_088bcba4
{
    void *unknown_00[12];
    int (*method_30)(struct Object_088bcba4 *, s8);
};
struct Object_088bcba4
{
    struct Methods_088bcba4 *methods;
};

int FUN_088bcba4(u8 *record, int value)
{
    struct Object_088bcba4 *object =
        FIELD(record, struct Object_088bcba4 *, 0x1018);
    s8 signed_value = (s8)(u8)value;

    if (object != 0) {
        int (*method)(struct Object_088bcba4 *, s8) =
            object->methods->method_30;
        return method(object, signed_value);
    }
    return 0;
}
