/* Purpose: classify an active record when its resolved value matches a request. */
extern int FUN_088684f8(void *object, int index, int selector);

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

unsigned int FUN_08868994(void *object, int value, int index)
{
    unsigned char *record = (unsigned char *)object + index * 0xfc + 0x30;
    if (FIELD(record, signed char, 0) != 0 &&
        FUN_088684f8(object, index, 4) == value) {
        if ((FIELD(record, unsigned int, 8) & 1) != 0)
            return 2;
        return 1;
    }
    return 0;
}
