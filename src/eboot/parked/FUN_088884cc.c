/* Purpose: update identity and metadata fields for the local peer record. */
extern unsigned char *FUN_08885024(void);
extern void FUN_0880c088(void *, const void *, int);

void FUN_088884cc(unsigned char *state, const void *identity, const void *metadata)
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
            FUN_0880c088(record + 0x139, identity, 6);
            FUN_0880c088(record + 0x128, metadata, 0x10);
            return;
        }
    }
}
