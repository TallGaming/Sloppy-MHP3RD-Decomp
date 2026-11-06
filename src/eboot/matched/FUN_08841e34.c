/*
 * Purpose: count nonzero status bytes in a ten-byte run at offset 0xc06.
 * Hypothesis: the first input is unused by this query.
 */
typedef unsigned char u8;

int FUN_08841e34(void *unused, const u8 *record) {
    int count = 0;
    int index = 0;

    do {
        if (record[0xC06] != 0) {
            count++;
        }
        record++;
    } while (++index != 10);
    return count;
}
