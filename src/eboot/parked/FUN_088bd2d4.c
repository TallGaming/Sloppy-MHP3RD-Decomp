/*
 * FUN_088bd2d4: invoke a method on an optional owned object.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 * PARKED: GCC tail-calls the indirect method instead of keeping a frame.
 */

typedef unsigned char u8;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

struct Object_088bd2d4;
struct Methods_088bd2d4
{
    void *unknown_00[10];
    int (*method_28)(struct Object_088bd2d4 *);
};
struct Object_088bd2d4
{
    struct Methods_088bd2d4 *methods;
};

int FUN_088bd2d4(u8 *record)
{
    struct Object_088bd2d4 *object =
        FIELD(record, struct Object_088bd2d4 *, 0x1018);

    if (object != 0) {
        return object->methods->method_28(object);
    }
    return 0;
}
