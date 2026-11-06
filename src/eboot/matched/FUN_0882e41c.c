/*
 * Purpose: validate 18 adjacent eight-byte entries with a shared context.
 * Hypothesis: the helper returns nonzero when an entry is valid.
 */
typedef unsigned char u8;

extern int FUN_088305b4(void *context, const void *entry);

int FUN_0882e41c(void *context, const void *entries) {
    int remaining = 18;
    const u8 *entry = entries;

    while (remaining != 0) {
        int valid = FUN_088305b4(context, entry);

        remaining--;
        entry += 8;
        if (valid == 0) {
            return 0;
        }
    }
    return 1;
}
