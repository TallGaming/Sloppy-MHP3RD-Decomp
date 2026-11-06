/* Purpose: allocate and register two work buffers unless external storage is used. */
extern unsigned char *D_09bb7bc4;
extern void *FUN_08878c28(void *, unsigned int, unsigned int);
extern void FUN_08878e64(void *, void *);

static void *allocate_registered(unsigned char *owner, unsigned int size,
                                 int type)
{
    void *allocation = FUN_08878c28(owner + 4, size, 16);
    int *entry = (int *)(owner + 0x843130);
    int index;

    if (allocation == 0)
        return 0;
    for (index = 0; index < 256; index++, entry += 3) {
        if (entry[0] == -1) {
            entry[0] = type;
            entry[1] = (int)allocation;
            entry[2] = size;
            return allocation;
        }
    }
    FUN_08878e64(owner + 4, allocation);
    return 0;
}

void FUN_0888fd7c(unsigned char *state, unsigned int flags)
{
    state[0x1450] = 0;
    state[0x1451] = 0;
    *(void **)(state + 0x94c) = 0;
    *(void **)(state + 0x950) = 0;
    *(void **)(state + 0x10) = 0;
    *(void **)(state + 0x14) = 0;

    if (flags & 0x80) {
        *(int *)(state + 0x0c) = 0;
    } else {
        unsigned char *owner = D_09bb7bc4;
        *(void **)(state + 0x10) = allocate_registered(owner, 0x7000, 40);
        *(void **)(state + 0x14) = allocate_registered(owner, 0x3f800, 41);
    }
    *(unsigned int *)(state + 0x1470) = flags;
    state[0x1483] = (flags & 0x10) != 0;
}
