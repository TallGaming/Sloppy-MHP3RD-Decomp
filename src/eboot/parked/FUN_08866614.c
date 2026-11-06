/* Purpose: test whether a resolved identifier is present in the object's bitset. */
extern unsigned int FUN_088663d4(void *object, unsigned short identifier);

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

unsigned int FUN_08866614(void *object, unsigned short identifier)
{
    unsigned int value = FUN_088663d4(object, identifier);
    if (value == 0xffff)
        return 0;
    if ((FIELD(object, unsigned int,
               0x5074 + (((value & 0x1fffff) >> 5) * 4)) &
         (1u << (value & 0x1f))) == 0)
        return 0;
    return 1;
}
