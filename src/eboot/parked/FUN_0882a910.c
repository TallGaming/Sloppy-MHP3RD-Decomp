/* Purpose: validate a candidate object against two owner flags. */
#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

unsigned int FUN_0882a910(const void *owner, const void *candidate)
{
    unsigned int result;
    if (candidate == 0)
        return 0;
    result = 1;
    if (FIELD(owner, signed char, 0xc31) != 0)
        return 0;
    if (FIELD(candidate, signed char, 0x51c) == 0)
        result = FIELD(owner, signed char, 0x7d1) != 0;
    return result;
}
