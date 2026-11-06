/*
 * FUN_088998ec: move a matching payload node from an active list to a free list.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: missing list globals and loop/list-update lowering remain different.
 */

typedef unsigned int u32;

typedef struct Node {
    int type;
    void *payload;
    struct Node *previous;
    struct Node *next;
} Node;

extern int D_09bb6c5c;
extern int D_09bb6c6c;
extern Node *D_09bb6c64;
extern Node *D_09bb6c70;

u32 FUN_088998ec(void *payload)
{
    Node *node;
    Node *next;
    Node *previous;
    Node *tail;

    if (D_09bb6c6c == 0) {
        return 0x8000001d;
    }
    node = D_09bb6c70->next;
    for (;;) {
        next = node->next;
        if (next == 0) {
            return 0x8000001d;
        }
        if (node->payload == payload) {
            break;
        }
        node = next;
    }
    previous = node->previous;
    previous->next = next;
    D_09bb6c6c--;
    next->previous = previous;
    tail = D_09bb6c64->previous;
    node->next = D_09bb6c64;
    tail->next = node;
    node->previous = tail;
    node->next->previous = node;
    D_09bb6c5c++;
    return 0;
}
