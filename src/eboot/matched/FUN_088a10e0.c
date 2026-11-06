/*
 * FUN_088a10e0: invoke a method on each node in an indexed linked list.
 *
 * Main EBOOT, G2 frame-plus-branches matching. Names and types are hypotheses.
 */

typedef unsigned char u8;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

struct Node_088a10e0;
struct Methods_088a10e0
{
    void *unknown_00[5];
    void (*method_14)(struct Node_088a10e0 *);
};
struct Node_088a10e0
{
    struct Methods_088a10e0 *methods;
    u8 unknown_04[0x50];
    struct Node_088a10e0 *next_54;
};

void FUN_088a10e0(u8 *record, int index)
{
    struct Node_088a10e0 *node =
        FIELD(record, struct Node_088a10e0 *, 0x28 + index * 4);

    while (node != 0) {
        node->methods->method_14(node);
        node = node->next_54;
    }
}
