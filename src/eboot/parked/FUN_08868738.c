/* Purpose: resolve a player-record attribute through its lookup table. */
extern unsigned char D_08980144[];
extern unsigned char D_0897dffc[];
extern unsigned char D_08984dac[];
extern unsigned char D_08986f1c[];
extern unsigned char D_089825ac[];

unsigned int FUN_08868738(int unused, unsigned char *player, int attribute)
{
    unsigned int flags = *(unsigned int *)(player + 8);
    (void)unused;
    switch (attribute) {
    case 0:
        if ((flags & 1) == 0) return *(unsigned short *)(D_08980144 + *(unsigned short *)(player + 0x1c) * 0x28);
        return *(unsigned short *)(D_08980144 + *(unsigned short *)(player + 0x1c) * 0x28 + 2);
    case 1:
        if ((flags & 1) == 0) return *(unsigned short *)(D_0897dffc + *(unsigned short *)(player + 0x26) * 0x28);
        return *(unsigned short *)(D_0897dffc + *(unsigned short *)(player + 0x26) * 0x28 + 2);
    case 2:
        if ((flags & 1) == 0) return *(unsigned short *)(D_08984dac + *(unsigned short *)(player + 0x30) * 0x28);
        return *(unsigned short *)(D_08984dac + *(unsigned short *)(player + 0x30) * 0x28 + 2);
    case 3:
        if ((flags & 1) == 0) return *(unsigned short *)(D_08986f1c + *(unsigned short *)(player + 0x3a) * 0x28);
        return *(unsigned short *)(D_08986f1c + *(unsigned short *)(player + 0x3a) * 0x28 + 2);
    case 4:
        if ((flags & 1) == 0) return *(unsigned short *)(D_089825ac + *(unsigned short *)(player + 0x44) * 0x28);
        return *(unsigned short *)(D_089825ac + *(unsigned short *)(player + 0x44) * 0x28 + 2);
    case 5: return (flags & 0xffff) >> 12;
    case 6: return (flags & 0xfff) >> 8;
    default: return (unsigned int)-1;
    }
}
