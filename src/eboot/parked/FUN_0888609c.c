/* Purpose: move the record with a matching six-byte key to the front. */
extern void FUN_0880c088(void *, const void *, int);

void FUN_0888609c(int unused, int count, unsigned char *records, int stride,
                  unsigned char *key_base, unsigned char *temporary,
                  const unsigned char *wanted)
{
    int key_offset = key_base - records;
    int i;

    (void)unused;
    for (i = 0; i < count; i++) {
        unsigned char *record = records + i * stride;
        unsigned char *key = record + key_offset;
        int byte;
        for (byte = 0; byte < 6; byte++)
            if (wanted[byte] != key[byte])
                break;
        if (byte == 6) {
            FUN_0880c088(temporary, records, stride);
            FUN_0880c088(records, record, stride);
            FUN_0880c088(record, temporary, stride);
            return;
        }
    }
}
