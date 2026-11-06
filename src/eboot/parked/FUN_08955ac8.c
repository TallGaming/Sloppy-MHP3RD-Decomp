/*
 * FUN_08955ac8: find ID in the linked list rooted at record offset 0x2C.
 *
 * Main EBOOT, attempt-high-01 batch 4. The list and node layouts are hypotheses.
 */

typedef unsigned char u8;

void *FUN_08955ac8(u8 *record, int id)
{
    if (id != -1) {
        u8 *node = *(u8 **)(record + 0x2c);

        if (node != 0) {
            if (id == *(int *)(node + 0x30))
                return node;
            while ((node = *(u8 **)(node + 4)) != 0) {
                if (id == *(int *)(node + 0x30))
                    return node;
            }
        }
    }
    return 0;
}
