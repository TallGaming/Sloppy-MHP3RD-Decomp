/* Purpose: clear two flag bits in 15 adjacent global bytes. */
extern unsigned char *D_08aace80;

void FUN_0887fde8(void)
{
    unsigned char *byte = D_08aace80 + 0x5f240;
    int index = 0;
    do {
        index++;
        *byte &= 0xdd;
        byte++;
    } while (index != 0x0f);
}
