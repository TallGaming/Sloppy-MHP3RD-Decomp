/* Purpose: traverse a linked tree, processing each node and its child chain. */
extern void FUN_08875a3c(void *middle, void *first, void *last);

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_088807fc(void *node)
{
    do {
        FUN_08875a3c((unsigned char *)node + 0x50,
                     (unsigned char *)node + 0x10,
                     (unsigned char *)node + 0x90);
        if (FIELD(node, void *, 0x14c) != 0)
            FUN_088807fc(FIELD(node, void *, 0x14c));
        node = FIELD(node, void *, 0x148);
    } while (node != 0);
}
