/*
 * FUN_08955fb4: prepend a node to the list at record offset 0x2C.
 *
 * Main EBOOT, attempt-high-01 batch 4. The list and node layouts are hypotheses.
 */

typedef unsigned char u8;

void FUN_08955fb4(u8 *record, u8 *node)
{
    *(int *)(node + 8) = 0;
    *(void **)(node + 4) = 0;
    if (*(void **)(record + 0x2c) != 0) {
        *(void **)(node + 4) = *(void **)(record + 0x2c);
        *(void **)(*(u8 **)(record + 0x2c) + 8) = node;
    }
    *(void **)(record + 0x2c) = node;
    (*(int *)(record + 0x30))++;
}
