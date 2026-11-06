/* Purpose: add and clamp a second large signed counter to 0..9,999,999. */
#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_088662cc(void *object, int amount)
{
    amount += FIELD(object, int, 0x5d484);
    FIELD(object, int, 0x5d484) = amount;
    if (amount > 9999999) {
        FIELD(object, int, 0x5d484) = 9999999;
        return;
    }
    if (amount < 0)
        FIELD(object, int, 0x5d484) = 0;
}
