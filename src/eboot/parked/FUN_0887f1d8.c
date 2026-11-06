/* Purpose: return the first index whose threshold is not above an input byte. */
extern unsigned char D_089caf8c[];

int FUN_0887f1d8(signed char value)
{
    unsigned char *threshold = D_089caf8c - 0xe64;
    signed char count = 0;
    int index = 0;
    do {
        unsigned char current = *threshold++;
        count++;
        if ((int)current <= (int)value)
            return index;
        index++;
    } while (count != 6);
    return 6;
}
