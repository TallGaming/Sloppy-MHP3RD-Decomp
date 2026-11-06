/*
 * FUN_08906848: select one halfword from a six-entry constant table.
 *
 * The destination field and table meaning are hypotheses.  A local table copy
 * is retained because it reproduces the original aggregate-copy shape.
 */
typedef unsigned char u8;
typedef unsigned short u16;

struct Table08906848 {
    u16 values[6];
} __attribute__((aligned(4)));

struct Object08906848 {
    u8 unknown00[6];
    u16 selected06;
};

extern const struct Table08906848 D_08969864;

void FUN_08906848(struct Object08906848 *object, unsigned int index)
{
    struct Table08906848 table = D_08969864;

    object->selected06 = table.values[(u8)index];
}
