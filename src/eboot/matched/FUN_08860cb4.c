/*
 * Purpose: test whether an object is enabled and its selected child is clear.
 * Hypothesis: byte one selects a 24-byte descriptor whose first word is a
 * child pointer.
 */
#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

unsigned int FUN_08860cb4(const void *object)
{
    unsigned int index;
    void *child;

    if (FIELD(object, unsigned char, 0x78) != 0) {
        index = FIELD(object, unsigned char, 1);
        child = FIELD(object, void *, 0x18 + index * 0x18);
        if (FIELD(child, unsigned char, 0x0e) == 0) {
            return 1;
        }
    }
    return 0;
}
