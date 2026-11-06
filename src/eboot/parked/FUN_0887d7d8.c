/* Purpose: find a short key in 24 global pairs and return its paired value. */
extern unsigned char *D_08aace80;

int FUN_0887d7d8(unsigned int unused, short key)
{
    short *key_cursor = (short *)(D_08aace80 + 0x5014);
    short *value_cursor = (short *)(D_08aace80 + 0x5016);
    int index = 0;
    (void)unused;
    do {
        short current = *key_cursor;
        index++;
        key_cursor += 2;
        if (current == key)
            return *value_cursor;
        value_cursor += 2;
    } while (index != 0x18);
    return 0;
}
