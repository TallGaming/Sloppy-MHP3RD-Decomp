/* Purpose: clear matching compact peer records and refresh their ordering. */
extern void FUN_0880c468(void *, int, int);
extern void FUN_08886034(void *);

void FUN_08886958(unsigned char *state, const unsigned char *identifier)
{
    int count = *(signed char *)(state + 0x1bd0);
    int removed = 0;
    int i;

    for (i = 0; i < count; i++) {
        unsigned char *record = state + 0x1bd4 + i * 0x90;
        int byte;
        for (byte = 0; byte < 6; byte++)
            if (identifier[byte] != record[byte])
                break;
        if (byte == 6) {
            FUN_0880c468(record, 0, 0x90);
            removed = 1;
        }
    }
    if (removed) {
        FUN_08886034(state);
        if (*(signed char *)(state + 0x1bd0) > 0)
            *(signed char *)(state + 0x1bd0) -= 1;
    }
}
