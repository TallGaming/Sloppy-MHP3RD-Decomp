/*
 * FUN_088ce09c: invoke another optional object's two-byte operation.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 * PARKED: the indirect call lowers as a shorter tail call.
 */

typedef unsigned char u8;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

typedef struct Object Object;
typedef struct ObjectMethods {
    void *reserved[11];
    int (*operation)(Object *, u8, u8);
} ObjectMethods;
struct Object { ObjectMethods *methods; };

int FUN_088ce09c(u8 *record, u8 a, u8 b)
{
    Object *object = FIELD(record, Object *, 0x3030);

    if (object == 0) {
        return 0;
    }
    return object->methods->operation(object, a, b);
}
