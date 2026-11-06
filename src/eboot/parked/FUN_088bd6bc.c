/*
 * FUN_088bd6bc: route a valid short value to one of two handlers.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 * PARKED: control-flow merging and indirect tail-call lowering differ.
 */

typedef unsigned char u8;
typedef short s16;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

struct Object_088bd6bc;
struct Methods_088bd6bc
{
    void *unknown_00[14];
    int (*method_38)(struct Object_088bd6bc *, s16);
};
struct Object_088bd6bc
{
    struct Methods_088bd6bc *methods;
};

int FUN_088f5708(void *part, s16 value);

int FUN_088bd6bc(u8 *record, s16 value)
{
    int less_than_10000;

    if (value == 0x7fff) {
        return 0;
    }
    less_than_10000 = value < 10000;
    if (value < 0) {
        return 0;
    }
    if (less_than_10000) {
        struct Object_088bd6bc *object =
            FIELD(record, struct Object_088bd6bc *, 0x1018);
        return object->methods->method_38(object, value);
    }
    return FUN_088f5708(record + 0x1820, value);
}
