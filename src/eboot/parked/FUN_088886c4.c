/* Purpose: refresh local peer data while an active network session permits it. */
extern unsigned char *D_09bc1ed8;
extern unsigned char *FUN_08885024(void);
extern void FUN_0880c088(void *, const void *, int);
extern void FUN_08831414(void *);

void FUN_088886c4(unsigned char *state, const void *data, int length)
{
    unsigned char *identifier;
    int count;
    int i;

    if ((*(unsigned int *)(D_09bc1ed8 + 0x10fa354) & 1) == 0 ||
        state[0x1bcd] <= 1 || state[0x1bcd] == 5)
        return;

    identifier = FUN_08885024();
    count = *(signed char *)(state + 0x17af);
    for (i = 0; i < count; i++) {
        unsigned char *record = state + 0x810 + i * 0x14c;
        int byte;
        for (byte = 0; byte < 6; byte++)
            if (identifier[byte] != record[8 + byte])
                break;
        if (byte == 6) {
            FUN_0880c088(record + 0x30, data, length);
            FUN_08831414(record + 0x30);
            break;
        }
    }
    *(int *)(state + 0x1bc8) = 0x3c;
}
