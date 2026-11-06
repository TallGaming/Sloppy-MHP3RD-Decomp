/*
 * FUN_088a12b4: clear word 0x70 of the record that method 0x44 of OBJECT returns.
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

struct Obj_088a12b4;
struct Obj_088a12b4_Methods
{
    void *unknown_00[17];
    void *(*method_44)(struct Obj_088a12b4 *);
};
struct Obj_088a12b4
{
    struct Obj_088a12b4_Methods *methods;
};

void FUN_088a12b4(void *unused, struct Obj_088a12b4 *object)
{
    u8 *rec = object->methods->method_44(object);

    FIELD(rec, s32, 0x70) = 0;
}
