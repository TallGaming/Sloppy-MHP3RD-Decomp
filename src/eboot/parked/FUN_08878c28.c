/* Purpose: allocate an aligned block by splitting the first sufficiently large free-list node. */
unsigned int FUN_08878c28(unsigned char *allocator, int size, int alignment)
{
    unsigned int needed;
    int *previous;
    int *node;

    if (size == 0)
        return 0;
    needed = (size + alignment + 0x2fU) >> 4;
    previous = (int *)(allocator + 8);
    while ((node = (int *)previous[2]) != 0) {
        if (needed <= (unsigned int)node[5]) {
            unsigned int result = ((unsigned int)node + alignment - 1 + node[4] * 0x10 -
                                   node[6] + 0x20) & -alignment;
            int *allocated = (int *)(result - 0x20);
            int remainder = node[5] - needed;
            int next = node[2];
            allocated[0] = node[0];
            if (allocated[0] != 0)
                *(int *)(allocated[0] + 4) = (int)allocated;
            allocated[5] = remainder;
            node[5] = 0;
            allocated[6] = node[6] + ((int)allocated - (int)node) - node[4] * 0x10;
            allocated[1] = (int)node;
            allocated[4] = needed;
            node[0] = (int)allocated;
            node[3] = 0;
            if (remainder == 0) {
                allocated[2] = 0;
                allocated[3] = 0;
                previous[2] = next;
                if (next != 0)
                    *(int *)(next + 0xc) = (int)previous;
            } else {
                previous[2] = (int)allocated;
                allocated[3] = (int)previous;
                allocated[2] = next;
                if (next != 0)
                    *(int *)(next + 0xc) = (int)allocated;
            }
            return result;
        }
        previous = node;
    }
    return 0;
}
