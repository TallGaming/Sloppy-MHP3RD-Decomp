/* Purpose: clear matching peer records and compact the remaining list. */
extern void FUN_0880c468(void *, int, int);
extern void FUN_08886068(void *);

void FUN_08886840(unsigned char *state, const unsigned char *identifier)
{
    int count = *(signed char *)(state + 0x17af);
    int removed = 0;
    int i;

    for (i = 0; i < count; i++) {
        unsigned char *record = state + 0x810 + i * 0x14c;
        int byte;
        for (byte = 0; byte < 6; byte++)
            if (identifier[byte] != record[8 + byte])
                break;
        if (byte == 6) {
            FUN_0880c468(record + 8, 0, 0x14c);
            removed = 1;
        }
    }
    if (removed) {
        FUN_08886068(state);
        if (*(signed char *)(state + 0x17af) > 1)
            *(signed char *)(state + 0x17af) -= 1;
    }
}
