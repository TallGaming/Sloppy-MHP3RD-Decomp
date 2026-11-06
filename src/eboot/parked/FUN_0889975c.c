/*
 * FUN_0889975c: select an object from a global descriptor and publish it.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 * PARKED: required absolute data symbols are not defined in symbols.s.
 */

struct Node_0889975c
{
    void *unknown_00;
    void *value_04;
    void *unknown_08;
    struct Node_0889975c *child_0c;
};
struct Descriptor_0889975c
{
    int unknown_00;
    int active_04;
    struct Node_0889975c *node_08;
};

extern struct Descriptor_0889975c D_09bb6c58;
extern struct Node_0889975c *D_09bb6c7c;

void *FUN_0889975c(void)
{
    if (D_09bb6c58.active_04 != 0) {
        struct Node_0889975c *node = D_09bb6c58.node_08->child_0c;
        D_09bb6c7c = node;
        return node->value_04;
    }
    return 0;
}
