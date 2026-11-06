/*
 * FUN_088ce068: invoke an optional object's three-byte operation.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 */

typedef unsigned char u8;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

typedef struct Object Object;
typedef struct ObjectMethods {
    void *reserved[10];
    void (*operation)(Object *, u8, u8, u8);
} ObjectMethods;
struct Object { ObjectMethods *methods; };

void FUN_088ce068(u8 *record, u8 a, u8 b, u8 c)
{
    Object *object = FIELD(record, Object *, 0x3030);

    if (object != 0) {
        object->methods->operation(object, a, b, c);
    }
}
