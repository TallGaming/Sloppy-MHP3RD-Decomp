/*
 * Purpose: report whether an optional record exists and has bit zero clear.
 * Hypothesis: the first two parameters are unused context retained by the ABI.
 */
#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

unsigned int FUN_0887dc6c(unsigned int unused1, unsigned int unused2,
                          const void *record)
{
    (void)unused1;
    (void)unused2;
    if (record != 0) {
        if (((FIELD(record, unsigned char, 7) ^ 1) & 1) != 0) {
            return 1;
        }
    }
    return 0;
}
