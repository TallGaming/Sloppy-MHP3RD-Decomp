/* Purpose: release three classes of temporary allocations from a global slot table. */
extern unsigned char *D_09bb7bc4;
extern void FUN_08878e64(void *, int);

void FUN_0888ffe4(unsigned char *state)
{
    unsigned char *owner = D_09bb7bc4;
    unsigned int count = *(unsigned int *)(owner + 0x843d30);
    unsigned int i;
    int *entry;

    entry = (int *)(owner + 0x843130);
    for (i = 0; i < count; i++, entry += 3) {
        if (entry[0] == 0x28) {
            FUN_08878e64(owner + 4, entry[1]);
            entry[0] = -1;
        }
    }
    entry = (int *)(owner + 0x843130);
    for (i = 0; i < count; i++, entry += 3) {
        if (entry[0] == 0x29) {
            FUN_08878e64(owner + 4, entry[1]);
            entry[0] = -1;
        }
    }
    if (state[0x654b] == 0) {
        entry = (int *)(owner + 0x843130);
        for (i = 0; i < count; i++, entry += 3) {
            if (entry[0] == 0x2a) {
                FUN_08878e64(owner + 4, entry[1]);
                entry[0] = -1;
            }
        }
    }
}
