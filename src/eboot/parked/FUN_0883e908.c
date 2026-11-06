/* Purpose: cap a byte count using an object limit and return its remainder. */
#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

unsigned int FUN_0883e908(const void *object, unsigned int multiplier,
                          unsigned int count)
{
    short limit = FIELD(object, short, 0x2ab2);
    unsigned int factor;
    unsigned int product;
    count &= 0xff;
    factor = (multiplier & 0xff) + 1;
    product = factor * count;
    if ((int)limit < (int)product)
        count = (short)((int)limit % (int)count);
    return count;
}
