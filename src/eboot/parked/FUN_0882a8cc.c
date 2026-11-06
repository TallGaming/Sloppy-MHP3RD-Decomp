/* Purpose: report whether either a global mode or an object flag is active. */
extern unsigned char *D_08aace80;

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

unsigned int FUN_0882a8cc(const void *object)
{
    unsigned int result = 0;
    if (FIELD(D_08aace80, signed char, 0x6bc) == 1 ||
        FIELD(object, signed char, 0xcda) != 0)
        result = 1;
    return result;
}
