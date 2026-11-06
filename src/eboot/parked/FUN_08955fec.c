/*
 * FUN_08955fec: allocate and initialize a tracked object for an owner.
 *
 * Main EBOOT, attempt-high-01 medium batch 19. Allocator and object roles are hypotheses.
 */
typedef unsigned int u32;
extern void *D_09bf5260; void *FUN_08878c28(void *, int, int); void *FUN_09c01d70(int, void *);
void FUN_089497d4(void *); void FUN_08878e64(void *, void *);
void *FUN_08955fec(unsigned char *owner)
{
    void *storage = FUN_08878c28(D_09bf5260, 0xa0, 0x10);
    unsigned char *object = 0;
    if (storage != 0) {
        object = FUN_09c01d70(0xa0, storage);
        FUN_089497d4(object);
        if (object == 0) FUN_08878e64(D_09bf5260, storage);
        else { u32 serial = *(u32 *)(owner + 0x28); *(u32 *)(owner + 0x28) = serial + 1; *(u32 *)(object + 0x30) = (serial & 0xffffff) | 0x14000000; }
    }
    return object;
}
