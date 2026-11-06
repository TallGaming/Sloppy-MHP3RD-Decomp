/*
 * Purpose: calculate a wrapped 16-bit angular difference.
 * Hypothesis: the word at offset 4 is the object's current angle.
 */
extern int FUN_0887776c(unsigned int value, unsigned int context);

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

unsigned int FUN_08877954(unsigned int context, const void *object,
                          unsigned int value)
{
    int angle = FUN_0887776c(value, context);
    return (angle + 0x4000 - FIELD(object, int, 4)) & 0xffff;
}
