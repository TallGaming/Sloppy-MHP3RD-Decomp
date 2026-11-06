/* Purpose: clear two flag bits in 22 adjacent global bytes. */
extern unsigned char *D_08aace80;

void FUN_0886e0e8(void)
{
    unsigned char *bytes = D_08aace80 + 0x5f95c;
    int index = 0;
    do {
        bytes[index] &= 0xdd;
        index++;
    } while (index != 0x16);
}
