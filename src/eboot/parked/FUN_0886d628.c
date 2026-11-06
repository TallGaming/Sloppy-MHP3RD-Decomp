/* Purpose: set a requested status bit and notify a handler. */
extern void FUN_0886d590(void *object, unsigned int selector, unsigned int bit);

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_0886d628(void *object, unsigned int bit)
{
    unsigned int value = FIELD(object, unsigned int, 0x58ef4) |
                         (1u << (bit & 0x1f));
    FIELD(object, unsigned int, 0x58ef4) = value;
    if (bit == 0x18) {
        FIELD(object, unsigned int, 0x58ef4) = value | 0x800000;
        FUN_0886d590(object, 8, 0x18);
        return;
    }
    FUN_0886d590(object, 8, bit);
}
