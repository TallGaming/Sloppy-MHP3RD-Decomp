/*
 * Purpose: return bit zero from the selected child record when enabled.
 * Hypothesis: byte one selects a 24-byte descriptor whose first word is a
 * child pointer.
 */
#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

unsigned char FUN_08860ad8(const void *object)
{
    if (FIELD(object, unsigned char, 0) == 0) {
        return 0;
    }
    {
        unsigned int index = FIELD(object, unsigned char, 1);
        /* This integer wording preserves the reference index-plus-base shape. */
        unsigned int address = index * 0x18 + (unsigned int)object;
        void *child = *(void **)(address + 0x18);
        return FIELD(child, unsigned char, 0x0c) & 1;
    }
}
