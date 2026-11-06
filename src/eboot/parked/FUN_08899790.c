/*
 * FUN_08899790: advance a global node cursor and return its value.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 * PARKED: the required global cursor symbol is not defined in symbols.s.
 */

struct Node_08899790
{
    void *unknown_00;
    void *value_04;
    void *unknown_08;
    struct Node_08899790 *next_0c;
};

extern struct Node_08899790 *D_09bb6c7c;

void *FUN_08899790(void)
{
    struct Node_08899790 *current = D_09bb6c7c;

    if (current != 0) {
        struct Node_08899790 *next = current->next_0c;
        D_09bb6c7c = next;
        if (next->next_0c != 0) {
            return next->value_04;
        }
        D_09bb6c7c = 0;
    }
    return 0;
}
