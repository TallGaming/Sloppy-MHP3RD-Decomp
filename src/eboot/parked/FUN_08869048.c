/* Purpose: return a selected byte after validating a record's category field. */
extern unsigned int FUN_08868fac(void *object, int index, unsigned int category);
extern unsigned int FUN_08868e08(void *object, unsigned char category);
extern unsigned char *FUN_0885c3dc(void *object, unsigned int category, int index);

#define LOOKUP_OBJECT (*(void **)0x08a3345c)
#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

unsigned char FUN_08869048(void *object, int record_index, unsigned char category)
{
    unsigned int normalized;
    unsigned char *record;
    if (FUN_08868fac(object, record_index, category) == 0)
        return 0;
    normalized = FUN_08868e08(object, category);
    if (normalized >= 5)
        return 0;
    record = FUN_0885c3dc(LOOKUP_OBJECT, normalized & 0xff,
        FIELD(object, short, record_index * 0xfc + 0x4c + normalized * 10));
    return record[0x13];
}
