/* Purpose: set a bit selected by a compact lookup result. */
extern unsigned int FUN_088663d4(void *object, unsigned short value);

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_088665b8(void *object, unsigned short value)
{
    unsigned int result = FUN_088663d4(object, value);
    unsigned char *word_base = (unsigned char *)object +
        (((result & 0x1fffff) >> 5) * 4);
    if (result != 0xffff)
        FIELD(word_base, unsigned int, 0x5074) |= 1u << (result & 0x1f);
}
