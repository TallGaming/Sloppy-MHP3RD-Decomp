/*
 * Purpose: clear the leading halfword of 128 fixed-size records and reset
 * three trailing words.
 * Hypothesis: records are 32 bytes and start at offset 0x8c.
 */
#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_08864b34(void *object)
{
    unsigned short *entry =
        (unsigned short *)((unsigned char *)object + 0x8c);
    unsigned short *end =
        (unsigned short *)((unsigned char *)object + 0x108c);

    do {
        *entry = 0;
        entry += 16;
    } while (entry < end);
    FIELD(object, unsigned int, 0x1094) = 0;
    FIELD(object, unsigned int, 0x108c) = 0;
    FIELD(object, unsigned int, 0x1090) = 0;
}
