/*
 * Purpose: find an active record with a matching byte identifier.
 * Hypothesis: there are 128 records of 32 bytes beginning at offset 0x8c.
 */
unsigned int FUN_08864bd8(const void *object, unsigned int identifier)
{
    const short *record =
        (const short *)((const unsigned char *)object + 0x8c);
    int remaining = 128;
    while (--remaining, record[0] != 1 ||
           ((const unsigned char *)record)[0x18] != identifier) {
        record += 16;
        if (remaining == 0) {
            return 0;
        }
    }
    return 1;
}
