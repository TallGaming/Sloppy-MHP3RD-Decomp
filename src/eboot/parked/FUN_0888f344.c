/* Purpose: initialize and register an embedded service descriptor. */
extern void thunk_FUN_0880c468(void *, int, unsigned int);
extern void FUN_08960fa8(void *);
extern unsigned char *D_09bb7a7c;

void FUN_0888f344(unsigned char *object, int value)
{
    unsigned char *descriptor = object + 0x688;

    thunk_FUN_0880c468(descriptor, 0, 0x2c4);
    *(int *)(object + 0x688) = 0x2c4;
    *(int *)(object + 0x694) = 0x32;
    *(int *)(object + 0x698) = 0x34;
    *(int *)(object + 0x6a0) = 0x29;
    *(int *)(object + 0x6c0) = value;
    *(int *)(object + 0x69c) = 0x33;
    *(int *)(object + 0x68c) = 0;
    *(int *)(object + 0x690) = 0;
    *(int *)(object + 0x6bc) = 0;
    *(int *)(object + 0x8c4) = 0;
    FUN_08960fa8(descriptor);
    object[0x1451] = 1;
    D_09bb7a7c[0x1e] = 1;
}
