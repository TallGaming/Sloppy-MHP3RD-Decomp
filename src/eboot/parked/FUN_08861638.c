/* Purpose: select and install the descriptor associated with the current service mode. */
extern unsigned char *D_09bc1ed8;
extern unsigned char *D_08aace80;
extern void *D_09bb7b60;
extern void *D_09bb7e90;
extern int FUN_088bcda8(void *);
extern int FUN_088cca24(void *);
extern int FUN_088ccc20(void *, int);
extern void FUN_08860148(void *, void *, void *);

int FUN_08861638(unsigned char *object)
{
    void *descriptor = 0;
    int mode;

    if ((*(unsigned int *)(D_09bc1ed8 + 0x10fa354) & 1) != 0 ||
        (*(unsigned int *)(D_08aace80 + 0x60474) & 0x104) != 0 ||
        FUN_088bcda8(D_09bb7b60) != 0)
        return 0;
    mode = FUN_088ccc20(D_09bb7e90, FUN_088cca24(D_09bb7e90));
    switch (mode) {
    case 1: descriptor = (void *)0x08a06d44; break;
    case 2: descriptor = (void *)0x08a06d2c; break;
    case 3: descriptor = (void *)0x08a06d14; break;
    case 4: descriptor = (void *)0x08a06cfc; break;
    case 5: descriptor = (void *)0x08a06ce4; break;
    case 12: descriptor = (void *)0x08a06d5c; break;
    }
    if (descriptor != 0)
        FUN_08860148(object, object + 0x4c, descriptor);
    return 0;
}
