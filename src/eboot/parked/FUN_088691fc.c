/* Purpose: retrieve the first short field for a category and index. */
extern short *FUN_0885c144(void *object, signed char category, unsigned short index);

#define LOOKUP_OBJECT (*(void **)0x08a3345c)

unsigned short FUN_088691fc(void *context, signed char category, unsigned short index)
{
    short *record;
    (void)context;
    if (((unsigned char)(category - 5) < 4) || category == 0x0c ||
        category == 0x0d || category == 0x0e || category == 0x10 ||
        category == 0x11) {
        record = FUN_0885c144(LOOKUP_OBJECT, category, index);
        return record[0];
    }
    record = FUN_0885c144(LOOKUP_OBJECT, category, index);
    return record[0];
}
