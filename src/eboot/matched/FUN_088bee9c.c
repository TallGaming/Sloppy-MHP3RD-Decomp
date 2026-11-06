/*
 * FUN_088bee9c: call virtual method 8 (offset 0x20) of the object at 0x10 (tail call).
 *
 * Main EBOOT, match slice 3 (tiny leaf functions, part 1). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

/* The record layout is unknown: FIELD reads or writes a member of the given
 * type at a byte offset. Offsets and widths come from the reference code. */
#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

/* Hypothesis: an object whose first word points to a method table. */
struct Object;
struct Methods
{
    void (*unknown_00[8])(struct Object *);
    void (*method_20)(struct Object *);
};
struct Object
{
    struct Methods *methods;
};

void FUN_088bee9c(void *rec)
{
    struct Object *object = FIELD(rec, struct Object *, 0x10);

    object->methods->method_20(object);
}
