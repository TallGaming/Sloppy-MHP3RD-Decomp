/* Purpose: assemble a three-byte value and apply its conditional sign byte. */
#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

unsigned int FUN_08869da0(unsigned int unused, void *record, signed char component)
{
    unsigned int offset = (unsigned char)(component * 3);
    unsigned int value = FIELD(record, unsigned char, 0x2a + offset);
    value |= (unsigned int)FIELD(record, unsigned char,
                                0x2a + ((offset + 1) & 0xff)) << 8;
    value |= (unsigned int)FIELD(record, unsigned char,
                                0x2a + ((offset + 2) & 0xff)) << 16;
    (void)unused;
    if (component == 3) {
        if ((FIELD(record, unsigned int, 0x28) & 0x200) != 0)
            value |= 0xff000000;
    } else if (component == 4) {
        if ((FIELD(record, unsigned int, 0x28) & 0x400) != 0)
            value |= 0xff000000;
    } else {
        value |= 0xff000000;
    }
    return value;
}
