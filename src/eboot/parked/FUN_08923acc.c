/*
 * Purpose: map an optional object's byte state to result values zero, one,
 * two, or three.
 * Hypothesis: byte 0x143 is the queried state and value five is special.
 */
extern void *FUN_0893e2d8(unsigned int key);

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

unsigned char FUN_08923acc(unsigned int unused, unsigned int key)
{
    void *object;
    (void)unused;
    object = FUN_0893e2d8(key);
    if (object == 0) {
        return 3;
    }
    if (FIELD(object, signed char, 0x143) == 0) {
        return 2;
    }
    return FIELD(object, signed char, 0x143) == 5;
}
