/* Purpose: return a selected byte when the normalized category is configured. */
extern unsigned int FUN_0886910c(void *object, unsigned char category);
extern unsigned int FUN_08868f2c(void *object, unsigned int category);
extern unsigned char *FUN_0885c3dc(void *object, unsigned int category, int index);

#define LOOKUP_OBJECT (*(void **)0x08a3345c)

unsigned char FUN_08869178(void *object, unsigned char category, short index)
{
    unsigned int normalized = FUN_0886910c(object, category);
    if (FUN_08868f2c(object, normalized) != 0)
        return FUN_0885c3dc(LOOKUP_OBJECT, category, index)[0x13];
    return 0;
}
