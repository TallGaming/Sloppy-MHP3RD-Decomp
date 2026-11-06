/* Purpose: allocate a large runtime block and register it in a fixed slot table. */
extern unsigned char *D_09bb7bc4;
extern void *D_09bf5250;
extern int FUN_08878c28(void *, int, int);
extern void FUN_08878e64(void *);

void FUN_08885bb8(void)
{
    unsigned char *owner = D_09bb7bc4;
    int memory;
    int slot;

    if (D_09bf5250 != 0)
        return;
    memory = FUN_08878c28(owner + 4, 0x63eb4, 0x10);
    if (memory == 0) {
        D_09bf5250 = 0;
        return;
    }

    for (slot = 0; slot < 0x100; slot++) {
        int *entry = (int *)(owner + 0x843130 + slot * 12);
        if (entry[0] == -1) {
            entry[0] = 0x39;
            entry[1] = memory;
            entry[2] = 0x63eb4;
            D_09bf5250 = (void *)memory;
            return;
        }
    }
    FUN_08878e64(owner + 4);
    D_09bf5250 = 0;
}
