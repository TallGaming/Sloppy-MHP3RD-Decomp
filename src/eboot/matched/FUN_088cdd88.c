/*
 * FUN_088cdd88: query an attached object and return its signed status byte.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 */

typedef unsigned char u8;
typedef signed char s8;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

typedef struct Object Object;
typedef struct ObjectMethods {
    void *reserved[2];
    u8 *(*query)(Object *);
} ObjectMethods;

struct Object {
    ObjectMethods *methods;
};

int FUN_088cdd88(u8 *record)
{
    Object *object = FIELD(record, Object *, 0x3030);
    u8 *result;

    if (object == 0) {
        return 0;
    }
    result = object->methods->query(object);
    if (result == 0) {
        return 0;
    }
    return (s8)result[1];
}
