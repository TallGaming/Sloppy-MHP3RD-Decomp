/* Purpose: initialize a lobby resource manager and all of its sub-resources. */
extern void *D_08ab4658;
extern void *D_08ab465c;
extern void *D_08ab4660;
extern void *D_08ab4664;
extern void *D_0896aba8;
extern void *D_0896abc0;
extern void *D_0896abd0;
extern void FUN_088f9cd0(void *);
extern void *FUN_08960ae8(const char *, int, int, int);
extern void FUN_08960ad8(void *, void **);
extern void FUN_08885bb8(void);

void FUN_0888bc5c(unsigned int *manager)
{
    void *resource;
    unsigned int *entry;
    int i;

    manager[0] = (unsigned int)&D_0896aba8;
    manager[1] = 12;
    manager[2] = 1;
    manager[5] = 0;
    manager[0x26] = (unsigned int)&D_0896abc0;
    D_08ab4660 = manager + 0x26;
    D_08ab4664 = manager;
    FUN_088f9cd0(manager + 0x29);

    entry = manager + 0x3e;
    for (i = 0; i < 4; i++, entry += 0x14)
        FUN_088f9cd0(entry);
    entry = manager + 0x8e;
    for (i = 0; i < 2; i++, entry += 0x14)
        FUN_088f9cd0(entry);
    entry = manager + 0xb6;
    for (i = 0; i < 5; i++, entry += 0x14)
        FUN_088f9cd0(entry);
    entry = manager + 0x124;
    for (i = 0; i < 4; i++, entry += 0x14)
        FUN_088f9cd0(entry);

    D_08ab4658 = FUN_08960ae8("LobbyResourceManager", 0, 0x80000, 0);
    FUN_08960ad8(D_08ab4658, &resource);
    ((unsigned int *)resource)[0x1ff3c] = 0x10;
    *(void **)resource = &D_0896abd0;
    D_08ab465c = resource;
    *((unsigned char *)manager + 0x18) = 0;
    manager[7] = 0;
    manager[8] = 0;
    manager[9] = 0;
    FUN_08885bb8();
}
