/* Purpose: write one of two large-offset state bytes by mode. */
#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_0886d948(void *object, int mode, unsigned char value)
{
    if (mode == 1) {
        FIELD(object, unsigned char, 0x5fae4) = value;
        return;
    }
    if (mode == 2)
        FIELD(object, unsigned char, 0x5fb5a) = value;
}
