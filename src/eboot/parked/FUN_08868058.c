/* Purpose: resolve special categories through one of three index tables. */
extern unsigned int FUN_08867cc0(unsigned int context, unsigned int selector,
                                 unsigned short index);

unsigned int FUN_08868058(unsigned int context, short category, unsigned int index)
{
    unsigned short *table;
    index &= 0xffff;
    if (category == 4) {
        table = (unsigned short *)0x089c8070;
        return FUN_08867cc0(context, 0x0c, table[index]);
    }
    if (category == 6) {
        table = (unsigned short *)0x089c80f8;
        return FUN_08867cc0(context, 0x0e, table[index]);
    }
    if (category == 10) {
        table = (unsigned short *)0x089c7fcc;
        return FUN_08867cc0(context, 0x16, table[index]);
    }
    return 0;
}
