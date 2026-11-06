/*
 * Purpose: find the highest of four selector attributes and map it into the
 * supported zero-based range of 0 through 63.
 */
typedef unsigned char u8;
typedef unsigned short u16;

typedef struct {
    u8 reserved;
    u8 category;
    u16 index;
} Selector;

extern const u8 (*const D_0897d9a0[5])[40];

unsigned FUN_0885e12c(void *unused, const Selector *selector)
{
    const u8 *record;
    unsigned largest;

    (void)unused;
    if (selector->category >= 5)
        return 0;

    record = D_0897d9a0[selector->category][selector->index];
    largest = record[21];
    if (largest < record[22])
        largest = record[22];
    if (largest < record[23])
        largest = record[23];
    if (largest < record[24])
        largest = record[24];

    if (largest == 0)
        return 0;
    if (largest > 64)
        return 63;
    return largest - 1;
}
