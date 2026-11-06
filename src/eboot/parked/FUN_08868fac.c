/* Purpose: test the configured category field for one indexed record. */
extern unsigned int FUN_08868e08(void *object, unsigned char category);
extern unsigned int FUN_08868e88(void *object, unsigned char category,
                                 int second, short index);

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

unsigned int FUN_08868fac(void *object, int record_index, unsigned int category)
{
    unsigned char *record = (unsigned char *)object + record_index * 0xfc + 0x30;
    int normalized = FUN_08868e08(object, category & 0xff);
    if (normalized < 5)
        return FUN_08868e88(object, category,
            FIELD(record, unsigned int, 8) & 1,
            FIELD(record, short, 0x1c + normalized * 10));
    return 0;
}
