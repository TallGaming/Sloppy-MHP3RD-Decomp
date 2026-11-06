/* Purpose: release renderer slots, destroy embedded objects, then tear down the base. */
extern void *D_09bfb090;
extern unsigned char *D_09bb7bc4;
extern int D_08ab4660;
extern int D_08ab4664;
extern unsigned char D_0896aba8;
extern unsigned char D_0896abc0;
extern unsigned char D_0896a890;
extern void FUN_088ef994(void *, int);
extern void FUN_08878e64(void *, int);
extern void FUN_088f9cdc(void *);
extern void FUN_08826abc(void *);

static void release_slot_kind(unsigned char *owner, int kind)
{
    int *entry = (int *)(owner + 0x843130);
    unsigned int count = *(unsigned int *)(owner + 0x843d30);
    unsigned int i;

    for (i = 0; i < count; i++, entry += 3) {
        if (entry[0] == kind) {
            FUN_08878e64(owner + 4, entry[1]);
            entry[0] = -1;
        }
    }
}

void FUN_0888c340(unsigned char *object)
{
    unsigned char *owner;
    int i;

    *(void **)object = &D_0896aba8;
    FUN_088ef994(D_09bfb090, 3);
    owner = D_09bb7bc4;
    release_slot_kind(owner, 3);
    release_slot_kind(owner, 4);

    *(void **)(object + 0x98) = &D_0896abc0;
    for (i = 3; i >= 0; i--)
        FUN_088f9cdc(object + 0x490 + i * 0x50);
    for (i = 4; i >= 0; i--)
        FUN_088f9cdc(object + 0x2d8 + i * 0x50);
    for (i = 1; i >= 0; i--)
        FUN_088f9cdc(object + 0x238 + i * 0x50);
    for (i = 3; i >= 0; i--)
        FUN_088f9cdc(object + 0xf8 + i * 0x50);
    FUN_088f9cdc(object + 0xa4);

    *(void **)object = &D_0896a890;
    D_08ab4660 = 0;
    D_08ab4664 = 0;
    FUN_08826abc(object);
}
