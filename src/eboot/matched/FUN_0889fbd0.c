/*
 * FUN_0889fbd0: query an object, apply a signed short, and bias the result.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 */

typedef short s16;

struct Object_0889fbd0;
struct Methods_0889fbd0
{
    void *unknown_00[17];
    void *(*method_44)(struct Object_0889fbd0 *);
};
struct Object_0889fbd0
{
    struct Methods_0889fbd0 *methods;
};

int FUN_088791d4(void *record, s16 value);

int FUN_0889fbd0(struct Object_0889fbd0 *object, s16 value)
{
    void *record = object->methods->method_44(object);
    return FUN_088791d4(record, value) + 0xd0;
}
