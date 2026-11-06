/* Purpose: obtain the current network record and mark its status bit in the owner. */
extern void FUN_08835328(void *);
extern void FUN_088865c8(void *, void *);

void FUN_088867c4(unsigned char *request)
{
    unsigned char record[156];
    unsigned char *object = *(unsigned char **)(request + 8);

    FUN_08835328(record);
    FUN_088865c8(object, record);
    *(unsigned int *)(object + 0x1bbc) |= 0x1000;
}
