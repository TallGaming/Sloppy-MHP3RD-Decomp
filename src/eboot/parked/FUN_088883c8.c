/* Purpose: update the small status fields for the local peer record. */
extern unsigned char *FUN_08885024(void);
extern void FUN_0880c088(void *, const void *, int);

void FUN_088883c8(unsigned char *state, const void *data,
                  unsigned short first, unsigned short second)
{
    unsigned char *identifier = FUN_08885024();
    int count = *(signed char *)(state + 0x17af);
    int i;

    for (i = 0; i < count; i++) {
        unsigned char *record = state + 0x810 + i * 0x14c;
        int byte;
        for (byte = 0; byte < 6; byte++)
            if (identifier[byte] != record[8 + byte])
                break;
        if (byte == 6) {
            FUN_0880c088(record + 0x139, data, 6);
            *(unsigned short *)(record + 0x142) = second;
            *(unsigned short *)(record + 0x140) = first;
            return;
        }
    }
}
