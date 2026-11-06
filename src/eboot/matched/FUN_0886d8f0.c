/* Purpose: return one of two large-offset state bytes by mode. */
#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

unsigned char FUN_0886d8f0(const void *object, int mode)
{
    if (mode == 1)
        return FIELD(object, unsigned char, 0x5fae4);
    if (mode == 2)
        return FIELD(object, unsigned char, 0x5fb5a);
    return 0;
}
