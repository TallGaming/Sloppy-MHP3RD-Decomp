/* Purpose: map a table count to one entry in a nine-byte global record table. */
extern unsigned char D_089caf8c[];
extern unsigned char D_0897d5f8[];

int FUN_0885ca20(unsigned int unused, unsigned int index)
{
    struct CountRecord {
        unsigned char unknown[16];
        unsigned short count;
        unsigned char padding[2];
    };
    unsigned short count;
    (void)unused;
    count = ((struct CountRecord *)D_089caf8c)[index & 0xffff].count;
    if (count != 0)
        return (int)(D_0897d5f8 + 0x3bc + count * 9);
    return 0;
}
