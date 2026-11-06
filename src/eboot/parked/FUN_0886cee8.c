/*
 * Purpose: test two status fields in an indexed 252-byte record.
 * Hypothesis: only the low byte of the index selects the record.
 */
#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

unsigned int FUN_0886cee8(const void *records, unsigned int index)
{
    const void *record =
        (const unsigned char *)records + (index & 0xff) * 0xfc;
    if (FIELD(record, signed char, 0x30) == 0 ||
        (FIELD(record, int, 0x38) << 10) >= 0) {
        return 0;
    }
    return 1;
}
