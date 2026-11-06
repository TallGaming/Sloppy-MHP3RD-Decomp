/* Purpose: decode two flag bits from an optional byte record. */
#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

unsigned int FUN_0883c560(void *object)
{
    unsigned char *flags = FIELD(object, unsigned char *, 0x0c);
    if (flags == 0)
        return 1;
    if ((*flags & 1) != 0)
        return 0;
    FIELD(object, signed char, 9) = ((*flags ^ 2) & 3) >> 1;
    FIELD(object, signed char, 8) = ((*flags ^ 4) & 7) >> 2;
    return 1;
}
