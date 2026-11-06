/* Purpose: return an adjusted table value when matching or empty active records allow it. */
extern unsigned char *D_08aace80;
extern unsigned char DAT_089caf8e[];
extern unsigned short *FUN_0886cae0(void *, int);

unsigned int FUN_0886ebf4(void *object, unsigned int item)
{
    unsigned int count = D_08aace80[0x60b84];
    short empty = 0;
    short index;

    item &= 0xffff;
    for (index = 0; index < count; index++) {
        unsigned short *record = FUN_0886cae0(object, index);
        if (record[0] == item) {
            unsigned char base = DAT_089caf8e[item * 0x14];
            return base == 0xff ? 0xff : (short)(base - record[1]);
        }
        if (*(short *)FUN_0886cae0(D_08aace80, index) == 0)
            empty++;
    }
    if (empty != 0)
        return DAT_089caf8e[item * 0x14];
    return 0xffffffff;
}
