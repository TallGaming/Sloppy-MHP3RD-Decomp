/* Purpose: clear one identifier record unless it is currently selected. */
extern unsigned int FUN_08866f60(void *object, unsigned int identifier);

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

unsigned int FUN_08866fd8(void *object, unsigned int identifier)
{
    unsigned int selected = FUN_08866f60(object, identifier & 0xffff);
    unsigned char *record = (unsigned char *)object +
        (identifier & 0xffff) * 0x0c + 0x85c;
    if (selected == 0) {
        FIELD(record, unsigned short, 0x172) = 0;
        FIELD(record, unsigned char, 0x168) = 0;
        FIELD(record, unsigned char, 0x169) = 0;
        FIELD(record, unsigned short, 0x16a) = 0;
        FIELD(record, unsigned char, 0x16c) = 0;
        FIELD(record, unsigned short, 0x16e) = 0;
        FIELD(record, unsigned short, 0x170) = 0;
    }
    return selected == 0;
}
