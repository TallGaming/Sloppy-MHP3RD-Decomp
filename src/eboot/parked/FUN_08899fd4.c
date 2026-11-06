/*
 * FUN_08899fd4: consume queued type-seven nodes until the queue is exhausted.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: equivalent nested-loop forms retain a different frame and flow layout.
 */

typedef struct Item {
    int type;
} Item;

Item *FUN_088997d8(void);
Item *FUN_0889980c(void);
void FUN_088998ec(void *item);

void *FUN_08899fd4(void)
{
    Item *item = FUN_088997d8();
    Item *next;

    for (;;) {
        if (item == 0) {
            return 0;
        }
        while (item->type != 7) {
            item = FUN_0889980c();
            if (item == 0) {
                return 0;
            }
        }
        item->type = 0;
        next = FUN_0889980c();
        FUN_088998ec(item);
        item = next;
    }
}
