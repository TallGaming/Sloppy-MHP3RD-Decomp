/* Purpose: insert a record at the front of a ten-record history after duplicate handling. */
extern int FUN_0886d108(void *, void *);
void *memcpy(void *, const void *, unsigned int);

void FUN_0886d2dc(unsigned char *object, const void *record)
{
    unsigned char *records = object + 0x592a4;
    int index;

    if (*(int *)records == *(const int *)record && FUN_0886d108(object, (void *)record) == 0)
        return;
    for (index = 9; index != 0; index--)
        memcpy(records + index * 0xa4, records + (index - 1) * 0xa4, 0xa4);
    memcpy(records, record, 0xa4);
}
