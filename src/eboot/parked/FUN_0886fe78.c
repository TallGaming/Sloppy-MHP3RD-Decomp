/* Purpose: reset several fixed global short tables and seed their final state. */
extern unsigned char *D_08aace80;
extern void *D_09bc1ed8;
extern unsigned int FUN_088e62f0(void *, int);

void FUN_0886fe78(void)
{
    int row;
    int column;

    for (row = 0; row < 4; row++)
        for (column = 0; column < 4; column++)
            *(unsigned short *)(D_08aace80 + 0x5eb0c + row * 0x10 + column * 4) = 0;
    for (row = 0; row < 3; row++)
        for (column = 0; column < 11; column++)
            *(unsigned short *)(D_08aace80 + 0x5eb4c + (row * 11 + column) * 4) = 0;
    for (row = 0; row < 3; row++)
        for (column = 0; column < 6; column++)
            *(unsigned short *)(D_08aace80 + 0x5ebd0 + (row * 6 + column) * 4) = 0;
    for (row = 0; row < 3; row++)
        for (column = 0; column < 8; column++)
            *(unsigned short *)(D_08aace80 + 0x5ec18 + row * 0x20 + column * 4) = 0;
    D_08aace80[0x5ed24] = 0xf;
    D_08aace80[0x5ed25] = 0;
    D_08aace80[0x5ed26] = 0;
    D_08aace80[0x5ed27] = 0;
    *(unsigned short *)(D_08aace80 + 0x5eea0) = FUN_088e62f0(D_09bc1ed8, 1);
}
