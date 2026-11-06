/*
 * FUN_0889980c: advance a global list cursor and return its payload.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: code shape matches, but the cursor global has no absolute symbol.
 */

typedef struct Node {
    int type;
    void *payload;
    struct Node *previous;
    struct Node *next;
} Node;

extern int D_09bb6c6c;
extern Node *D_09bb6c78;

void *FUN_0889980c(void)
{
    if (D_09bb6c6c == 0 || D_09bb6c78 == 0) {
        return 0;
    }
    D_09bb6c78 = D_09bb6c78->next;
    if (D_09bb6c78->next == 0) {
        D_09bb6c78 = 0;
        return 0;
    }
    return D_09bb6c78->payload;
}
