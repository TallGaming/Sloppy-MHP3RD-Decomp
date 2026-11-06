/* Purpose: process and clear two pending notification bytes. */
extern void FUN_08960b78(unsigned int handle, unsigned int four, const void *argument);

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_088629e8(void *object)
{
    void *local[4];
    if (FIELD(object, signed char, 0x2f558) != 0) {
        local[0] = object;
        FUN_08960b78(FIELD(object, unsigned int, 0x2f554), 4, local);
        FIELD(object, unsigned char, 0x2f558) = 0;
    }
    if (FIELD(object, signed char, 0x2f559) != 0) {
        local[0] = object;
        FUN_08960b78(FIELD(object, unsigned int, 0x2f52c), 4, local);
        FIELD(object, unsigned char, 0x2f559) = 0;
    }
}
