/*
 * FUN_088997d8: select an object from a second global descriptor and publish it.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 * PARKED: required absolute data symbols are not defined in symbols.s.
 */

struct Node_088997d8
{
    void *unknown_00;
    void *value_04;
    void *unknown_08;
    struct Node_088997d8 *child_0c;
};
struct Descriptor_088997d8
{
    int unknown_00;
    int active_04;
    struct Node_088997d8 *node_08;
};

extern struct Descriptor_088997d8 D_09bb6c68;
extern struct Node_088997d8 *D_09bb6c78;

void *FUN_088997d8(void)
{
    if (D_09bb6c68.active_04 != 0) {
        struct Node_088997d8 *node = D_09bb6c68.node_08->child_0c;
        D_09bb6c78 = node;
        return node->value_04;
    }
    return 0;
}
