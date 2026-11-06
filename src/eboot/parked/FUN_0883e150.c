/* Purpose: copy three words into an object and notify its update handler. */
extern void FUN_088a627c(void *object);

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_0883e150(unsigned int unused, void *object, const unsigned int *source)
{
    unsigned int second = source[1];
    unsigned int third = source[2];
    (void)unused;
    FIELD(object, unsigned int, 0x484) = source[0];
    FIELD(object, unsigned int, 0x488) = second;
    FIELD(object, unsigned int, 0x48c) = third;
    FUN_088a627c(object);
}
