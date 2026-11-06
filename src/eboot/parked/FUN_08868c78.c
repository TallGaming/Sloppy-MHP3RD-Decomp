/* Purpose: retrieve one of four metadata values for a record. */
extern unsigned short D_08a15ce0[];

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

unsigned int FUN_08868c78(void *object, int index, int kind)
{
    unsigned char *record = (unsigned char *)object + index * 0xfc + 0x30;
    if (kind == 1) {
        unsigned short *table = (unsigned short *)0x08a15760;
        return table[FIELD(record, unsigned short, 0xf0) * 8];
    }
    if (kind == 0) {
        unsigned char *table = (unsigned char *)0x089c725c;
        return table[FIELD(record, unsigned char, 0x98) * 7];
    }
    if (kind == 2) {
        unsigned short *table = (unsigned short *)0x08a151e0;
        return table[FIELD(record, unsigned short, 0xf4) * 8];
    }
    if (kind == 3)
        return D_08a15ce0[FIELD(record, unsigned short, 0xf8) * 0x0c];
    return 0xffffffff;
}
