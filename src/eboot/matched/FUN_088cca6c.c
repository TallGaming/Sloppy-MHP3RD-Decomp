/*
 * FUN_088cca6c: release the object at 0x3034 (method 0xC) and clear the pointer.
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

struct Obj_088cca6c;
struct Obj_088cca6c_Methods
{
    void *unknown_00[3];
    void (*method_0c)(struct Obj_088cca6c *);
};
struct Obj_088cca6c
{
    struct Obj_088cca6c_Methods *methods;
};

void FUN_088cca6c(u8 *rec)
{
    struct Obj_088cca6c *object = FIELD(rec, struct Obj_088cca6c *, 0x3034);

    object->methods->method_0c(object);
    FIELD(rec, void *, 0x3034) = 0;
}
