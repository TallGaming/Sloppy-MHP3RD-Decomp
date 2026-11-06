/* Purpose: append a unique peer record and refresh its derived fields. */
extern unsigned char *D_08aace80;
extern void FUN_08870ebc(void *, void *);
extern void FUN_0880c088(void *, const void *, int);
extern void FUN_08886068(void *);

void FUN_08886404(unsigned char *state, unsigned char *incoming)
{
    int count;
    int i;

    FUN_08870ebc(D_08aace80, incoming + 0x28);
    count = *(signed char *)(state + 0x17af);
    for (i = 0; i < count; i++) {
        unsigned char *record = state + 0x810 + i * 0x14c;
        int byte;
        for (byte = 0; byte < 6; byte++)
            if (incoming[byte] != record[8 + byte])
                break;
        if (byte == 6)
            return;
    }
    if (count > 3)
        return;

    FUN_0880c088(state + 0x818 + count * 0x14c, incoming, 0x140);
    *(signed char *)(state + 0x17af) = count + 1;
    FUN_08886068(state);
}
