/* Purpose: return a table value adjusted by the matching active record. */
extern unsigned char *D_08aace80;
extern unsigned char DAT_089caf8e[];
extern unsigned short *FUN_0886cae0(void *, unsigned int);

unsigned int FUN_0886eafc(void *object, unsigned int item)
{
    unsigned int index;
    unsigned int count = D_08aace80[0x60b84];
    unsigned char base;

    item &= 0xffff;
    base = DAT_089caf8e[item * 0x14];
    for (index = 0; index < count; index++) {
        unsigned short *record = FUN_0886cae0(object, index);
        if (record[0] == item)
            return base == 0xff ? 0xff : base - (short)record[1];
    }
    return base;
}
