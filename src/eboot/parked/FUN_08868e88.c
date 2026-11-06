/* Purpose: test one of two short fields in a category-indexed record. */
extern unsigned int FUN_08868e08(unsigned int context, unsigned char category);
extern short *FUN_0885c3dc(void *object, unsigned int category, int index);

#define LOOKUP_OBJECT (*(void **)0x08a3345c)

unsigned int FUN_08868e88(unsigned int context, unsigned char category,
                          int second, short index)
{
    unsigned int normalized = FUN_08868e08(context, category);
    short *record;
    if (normalized >= 5)
        return 0;
    record = FUN_0885c3dc(LOOKUP_OBJECT, normalized & 0xff, index);
    if (second == 0)
        return record[0] != 0;
    return record[1] != 0;
}
