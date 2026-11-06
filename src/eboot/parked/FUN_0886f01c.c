/* Purpose: set a global status bit and notify only when it changes. */
extern unsigned char *D_08aace80;
extern void FUN_0886eda4(void *object, unsigned int selector);

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_0886f01c(unsigned int unused, unsigned int bit)
{
    void *object = D_08aace80;
    unsigned int old_value = FIELD(object, unsigned int, 0x5d49c);
    unsigned int new_value = old_value | (1u << (bit & 0x1f));
    (void)unused;
    FIELD(object, unsigned int, 0x5d49c) = new_value;
    if (old_value != new_value)
        FUN_0886eda4(object, 0x9e);
}
