/* Purpose: append a unique network record while the four-record table has capacity. */
extern int FUN_088865c8(void *, const void *);
extern void FUN_08886034(void *);

void FUN_08886684(unsigned char *object, const unsigned int *record)
{
    const unsigned int *end;
    unsigned int *destination;

    if (FUN_088865c8(object, record) != 0 || *(signed char *)(object + 0x1bd0) > 3)
        return;
    end = record + 36;
    destination = (unsigned int *)(object + 0x1bd4 + *(signed char *)(object + 0x1bd0) * 0x90);
    do {
        unsigned int second = record[1];
        unsigned int third = record[2];
        unsigned int fourth = record[3];
        destination[0] = record[0];
        record += 4;
        destination[1] = second;
        destination[2] = third;
        destination[3] = fourth;
        destination += 4;
    } while (record != end);
    object[0x1bd0]++;
    FUN_08886034(object);
}
