/*
 * Purpose: test whether an indexed record is active and not suppressed.
 * Hypothesis: the first halfword of each 12-byte record is a flag field.
 */
unsigned int FUN_088550f4(const void *records, int index)
{
    struct Record {
        unsigned short flags;
        unsigned char unknown[10];
    };
    /* Reversed subscript wording preserves the reference index-plus-base shape. */
    const unsigned short flags = index[(const struct Record *)records].flags;

    if ((flags & 1) != 0) {
        if ((flags & 2) == 0) {
            return 1;
        }
    }
    return 0;
}
