/* Purpose: read the selected value from one of several fixed-width data tables. */
extern unsigned char D_08980144[];
extern unsigned char D_0897dffc[];
extern unsigned char D_08984dac[];
extern unsigned char D_08986f1c[];
extern unsigned char D_089825ac[];

unsigned int FUN_088682e4(int unused, char alternate, unsigned char table,
                          unsigned int index, char use_table)
{
    (void)unused;
    index &= 0xffff;
    switch (table) {
    case 0:
        if (alternate == 0) return *(unsigned short *)(D_08980144 + index * 0x28);
        return *(unsigned short *)(D_08980144 + index * 0x28 + 2);
    case 1:
        if (alternate == 0) return *(unsigned short *)(D_0897dffc + index * 0x28);
        return *(unsigned short *)(D_0897dffc + index * 0x28 + 2);
    case 2:
        if (alternate == 0) return *(unsigned short *)(D_08984dac + index * 0x28);
        return *(unsigned short *)(D_08984dac + index * 0x28 + 2);
    case 3:
        if (alternate == 0) return *(unsigned short *)(D_08986f1c + index * 0x28);
        return *(unsigned short *)(D_08986f1c + index * 0x28 + 2);
    case 4:
        if (use_table != 1)
            return index;
        if (alternate == 0) return *(unsigned short *)(D_089825ac + index * 0x28);
        return *(unsigned short *)(D_089825ac + index * 0x28 + 2);
    case 5:
    case 6:
        return index;
    default:
        return (unsigned int)-1;
    }
}
