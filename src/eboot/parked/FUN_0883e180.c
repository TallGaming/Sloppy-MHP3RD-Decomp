/* Purpose: copy three words into an indexed object slot and notify an update. */
extern void FUN_088a627c(void *object);

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_0883e180(unsigned int unused, void *object, const unsigned int *source)
{
    unsigned int first = source[0];
    unsigned int second = source[1];
    unsigned int index = ((const unsigned char *)source)[1];
    unsigned char *slot = (unsigned char *)object + index * 0x10;
    (void)unused;
    FIELD(slot, unsigned int, 0x498) = source[2];
    FIELD(slot, unsigned int, 0x490) = first;
    FIELD(slot, unsigned int, 0x494) = second;
    FUN_088a627c(object);
}
