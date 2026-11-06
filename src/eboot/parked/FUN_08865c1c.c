/* Purpose: initialize 32 global records of 44 bytes each. */
extern unsigned char D_08a338ac[];
extern void FUN_08865aac(void *record);

void FUN_08865c1c(void)
{
    int remaining = 32;
    unsigned char *record = D_08a338ac;
    do {
        FUN_08865aac(record);
        record += 0x2c;
        remaining--;
    } while (remaining != 0);
}
