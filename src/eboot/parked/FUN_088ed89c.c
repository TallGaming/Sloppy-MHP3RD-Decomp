/*
 * FUN_088ed89c: submit a pending command and retire its handle.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: pending-command branches remain longer and broadly different.
 */
typedef unsigned char u8;
void FUN_088ec504(void *);
int FUN_08960f58(void *, int, void *, void *);
void FUN_08960f70(void *, unsigned int);
void FUN_088ec518(void *);

int FUN_088ed89c(u8 *record)
{
    int result = 0;
    FUN_088ec504((void *)0x09be9f24);
    if (*(int *)(record + 0x150) != -1) {
        if ((*(int *)(record + 0x54) == 0 || *(int *)(record + 0x54) == 2 ||
             *(int *)(record + 0x2c) == 1) &&
            (result = FUN_08960f58(*(void **)(record + 8), *(int *)(record + 0x150),
                                   *(void **)(record + 0x154), *(void **)(record + 0x158))) == 0) {
            unsigned int mode = 0;
            if (*(int *)(record + 0x48) == 1) mode = 0x7fffffff;
            FUN_08960f70(*(void **)(record + 8), mode);
            *(int *)(record + 0x84) = *(int *)(record + 0x150);
        }
        *(int *)(record + 0x150) = -1;
    }
    FUN_088ec518((void *)0x09be9f24);
    return result;
}
