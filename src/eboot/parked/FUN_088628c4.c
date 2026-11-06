/* Purpose: service two digest-worker events and signal their completion objects. */
extern int FUN_08960b98(int, int, int, int);
extern void FUN_08960bf8(int);
extern void FUN_08960c20(int, int);
extern void FUN_08960b40(int, int);
extern int FUN_08862434(void *, int, int);

void FUN_088628c4(unsigned char *object)
{
    int event;

    if (FUN_08960b98(*(int *)(object + 0x2f550), 1, 0, 0) == 0) {
        FUN_08960bf8(*(int *)(object + 0x2f554));
        FUN_08960c20(*(int *)(object + 0x2f550), -2);
        FUN_08960b40(*(int *)(object + 0x2f550), 0x10);
        object[0x2f558] = 1;
    }
    if (FUN_08960b98(*(int *)(object + 0x2f528), 1, 0, 0) == 0) {
        unsigned char *request = *(unsigned char **)(object + 0x2f530);
        event = FUN_08862434(object, *(int *)(request + 4) + *(int *)(request + 0xc),
                            *(int *)(request + 8));
        if (event != 0) {
            FUN_08960bf8(*(int *)(object + 0x2f52c));
            FUN_08960c20(*(int *)(object + 0x2f528), -2);
            FUN_08960b40(*(int *)(object + 0x2f528), 0x10);
            object[0x2f559] = 1;
        }
    }
}
