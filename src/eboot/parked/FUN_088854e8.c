/* Purpose: find a matching six-byte peer identifier and update its record. */
extern void FUN_0880c088();
extern unsigned char *FUN_08885024(void *);

void FUN_088854e8(unsigned char *state, const void *source, int length)
{
    unsigned char *identifier;
    int count;
    int i;

    if (length == 0)
        return;
    FUN_0880c088(state + 0x48);
    *(unsigned short *)(state + 0x164) = 0x11c;
    identifier = FUN_08885024(state);
    count = *(signed char *)(state + 0x17af);
    if (count > 0) {
        unsigned char *record = state + 0x810;
        i = 0;
        do {
            unsigned char *left = identifier;
            unsigned char *right = record + 8;
            int byte = 0;
            do {
                unsigned char value = *left++;
                byte++;
                if (value != *right++)
                    break;
                if (byte == 6) {
                    FUN_0880c088(record + 0x30, source, length);
                    return;
                }
            } while (1);
            i++;
            record += 0x14c;
        } while (i != count);
    }
}
