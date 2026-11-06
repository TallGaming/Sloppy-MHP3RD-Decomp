/* Purpose: return an allocated block to its free-list node and relink that node. */
void FUN_08878e64(unsigned char *allocator, unsigned char *payload)
{
    int *node;
    int before;
    int previous;
    int next;

    if (payload == 0 || (node = *(int **)(payload - 0x1c)) == 0)
        return;
    before = *(int *)(payload - 0x20);
    node[5] += *(int *)(payload - 0x10) + *(int *)(payload - 0xc);
    *(int *)(payload - 0x1c) = 0;
    if (before == 0)
        node[0] = 0;
    else {
        *(int **)(before + 4) = node;
        node[0] = before;
    }
    next = *(int *)(payload - 0x18);
    previous = *(int *)(payload - 0x14);
    if (node[3] == 0) {
        if (previous == 0) {
            int *cursor = (int *)(allocator + 8);
            while (cursor[2] != 0) {
                if (*(int *)(cursor[2] + 0xc) != 0)
                    cursor = (int *)cursor[2];
                else
                    break;
            }
            node[3] = (int)cursor;
            node[2] = cursor[2];
            cursor[2] = (int)node;
        } else {
            *(int **)(previous + 8) = node;
            node[3] = previous;
            node[2] = next;
        }
    } else {
        if (previous == 0)
            return;
        node[2] = next;
    }
    if (next != 0)
        *(int **)(next + 0xc) = node;
}
