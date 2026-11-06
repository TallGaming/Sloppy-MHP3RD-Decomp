/* Check the packed byte used by the selected record category. */
typedef unsigned char u8;

struct Record0885f760 {
    u8 prefix;
    u8 selector;
    unsigned short index;
    u8 packed;
};

extern int FUN_0885f610(void *context, u8 selector);

int FUN_0885f760(void *context, const struct Record0885f760 *record)
{
    u8 selector = record->selector;
    int category = FUN_0885f610(context, selector);

    if (category == 0)
        return record->packed != 0;
    if (category == 1 && (selector == 9 || selector == 11 || selector == 15))
        return (record->packed & 15) != 0;
    return 0;
}

