/* Purpose: combine two global bytes with the high nibble of a global word. */
extern unsigned char D_09bb7a5c[];

unsigned int FUN_0883bd58(void)
{
    if (*(signed char *)(D_09bb7a5c + 0x78) != 0)
        return 0;
    return (*(unsigned int *)(D_09bb7a5c + 0x14) & 0xf0) |
           D_09bb7a5c[0x0c];
}
