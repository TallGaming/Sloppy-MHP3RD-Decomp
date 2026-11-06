/* Purpose: bubble-sort fixed-size records using a six-byte key. */
extern void FUN_0880c088(void *, const void *, int);

void FUN_08885ee4(int unused, int count, unsigned char *records, int stride,
                  unsigned char *key, unsigned char *temporary)
{
    int pass;
    int i;
    int key_offset = key - records;

    (void)unused;
    count--;
    if (count < 1)
        return;
    for (pass = 0; pass < count; pass++) {
        unsigned char *left = records;
        unsigned char *right = records + stride;
        for (i = 0; i < count; i++, left += stride, right += stride) {
            unsigned char *left_key = left + key_offset;
            unsigned char *right_key = right + key_offset;
            int byte;
            for (byte = 0; byte < 6; byte++) {
                if (left_key[byte] < right_key[byte]) {
                    FUN_0880c088(temporary, left, stride);
                    FUN_0880c088(left, right, stride);
                    FUN_0880c088(right, temporary, stride);
                    break;
                }
                if (left_key[byte] > right_key[byte])
                    break;
            }
        }
    }
}
