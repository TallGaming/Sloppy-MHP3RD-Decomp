/* Purpose: find the first of five records that supports mode two. */
extern int FUN_0890681c(void *record, int mode);

void *FUN_08869f8c(void *object)
{
    unsigned char *record = (unsigned char *)object + 0x5daec;
    int index;
    for (index = 0; index < 5; index++, record += 0xa0) {
        if (FUN_0890681c(record, 2) != 0)
            return record;
    }
    return 0;
}
