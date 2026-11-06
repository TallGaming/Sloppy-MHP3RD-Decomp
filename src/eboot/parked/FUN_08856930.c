/* Purpose: test three object flags against a global sentinel. */
#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))
#define GLOBAL_SENTINEL (*(int *)0x09bc1edc)

unsigned int FUN_08856930(const void *object)
{
    if (FIELD(object, signed char, 0x188) == 0 ||
        FIELD(object, signed char, 0x189) != 0 ||
        FIELD(object, int, 0x18c) == GLOBAL_SENTINEL)
        return 0;
    return 1;
}
