/*
 * FUN_08899870: remove the head of one global list and append it to another.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: several list globals lack symbols and register scheduling differs.
 */

typedef struct Node {
    int type;
    void *payload;
    struct Node *previous;
    struct Node *next;
} Node;

extern int D_09bb6c5c;
extern int D_09bb6c6c;
extern Node *D_09bb6c60;
extern Node *D_09bb6c74;

void *FUN_08899870(void)
{
    Node *node;
    Node *next;
    Node *tail;
    void *payload = 0;

    if (D_09bb6c5c != 0) {
        node = D_09bb6c60->next;
        next = node->next;
        D_09bb6c6c++;
        D_09bb6c5c--;
        next->previous = node->previous;
        payload = node->payload;
        node->previous->next = next;
        tail = D_09bb6c74->previous;
        node->next = D_09bb6c74;
        tail->next = node;
        node->previous = tail;
        node->next->previous = node;
    }
    return payload;
}
