/* Purpose: assign packed records to eligible nodes in depth-first order. */
extern void FUN_0880c468(void *, int, int);

void FUN_08880de0(unsigned char *root, int *records, int alternate)
{
    unsigned char *node = root;
    unsigned char *record = (unsigned char *)(records + 4);
    int remaining = records[0];

    for (;;) {
        unsigned int tag = *(unsigned int *)(node + 0x270) & 0xffffff;
        int **slot = (int **)(node + (alternate != 0 ? 0x1e0 : 0x150));
        if (tag != 0x2d504f && tag != 0x2d4c43) {
            *slot = (int *)record;
            remaining--;
            FUN_0880c468(slot + 1, 0, 0x12);
            if (remaining > 0)
                record += *(unsigned short *)(record + 2);
        }

        if (*(unsigned char **)(node + 0x14c) != 0) {
            node = *(unsigned char **)(node + 0x14c);
            continue;
        }
        if (node == root)
            return;
        while (*(unsigned char **)(node + 0x148) == 0) {
            node = *(unsigned char **)(node + 0x144);
            if (node == root)
                return;
        }
        node = *(unsigned char **)(node + 0x148);
    }
}
