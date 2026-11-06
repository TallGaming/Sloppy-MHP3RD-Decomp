/* Purpose: add and clamp a large signed counter to 0..9,999,999. */
#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_0886627c(void *object, int amount)
{
    amount += FIELD(object, int, 0x5d47c);
    FIELD(object, int, 0x5d47c) = amount;
    if (amount > 9999999) {
        FIELD(object, int, 0x5d47c) = 9999999;
        return;
    }
    if (amount < 0)
        FIELD(object, int, 0x5d47c) = 0;
}
