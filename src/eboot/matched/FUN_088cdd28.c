/*
 * FUN_088cdd28: return signed byte 0x10 of the record from method 0x2C of the object at 0x3034.
 *
 * Main EBOOT, match slice 11 (small functions with a frame, no branches, part 3). Names and types are hypotheses.
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

struct Obj_088cdd28;
struct Obj_088cdd28_Methods
{
    void *unknown_00[11];
    void *(*method_2c)(struct Obj_088cdd28 *);
};
struct Obj_088cdd28
{
    struct Obj_088cdd28_Methods *methods;
};

s8 FUN_088cdd28(u8 *rec)
{
    struct Obj_088cdd28 *object = FIELD(rec, struct Obj_088cdd28 *, 0x3034);

    return FIELD(object->methods->method_2c(object), s8, 0x10);
}
