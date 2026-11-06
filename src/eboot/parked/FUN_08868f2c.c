/* Purpose: test the configured field for a normalized category. */
extern unsigned int FUN_08868e08(void *object, unsigned char category);
extern unsigned int FUN_08868e88(void *object, unsigned char category,
                                 int second, short index);

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

unsigned int FUN_08868f2c(void *object, unsigned int category)
{
    int normalized = FUN_08868e08(object, category & 0xff);
    if (normalized < 5)
        return FUN_08868e88(object, category,
            FIELD(object, unsigned char, 0x877),
            FIELD(object, short, 0x8ae + normalized * 0x0c));
    return 0;
}
