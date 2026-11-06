/* Purpose: rebuild five global slots from initialized source records. */
extern void FUN_08908000(int index, void *record);
extern int FUN_08906550(void *record);
typedef int (*ExternalCheck)(void *context, void *record);

#define EXTERNAL_CHECK ((ExternalCheck)0x09c358b4)
#define EXTERNAL_CONTEXT (*(void **)0x09c483b0)

void FUN_08869e58(void *object)
{
    unsigned char *record;
    int index;
    for (index = 0; index < 6; index++)
        FUN_08908000(index, 0);
    record = (unsigned char *)object + 0x5daec;
    for (index = 0; index < 5; index++, record += 0xa0) {
        if (FUN_08906550(record) == 1 &&
            EXTERNAL_CHECK(EXTERNAL_CONTEXT, record) == 0)
            FUN_08908000(index, record);
    }
}
