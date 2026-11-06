/* Purpose: initialize 30 fixed-size records. */
extern void FUN_0883c508(void *record);

void FUN_0883c514(void *object)
{
    int remaining = 30;
    unsigned char *record = (unsigned char *)object + 0x254;
    do {
        remaining--;
        FUN_0883c508(record);
        record += 0x7c;
    } while (remaining != 0);
}
