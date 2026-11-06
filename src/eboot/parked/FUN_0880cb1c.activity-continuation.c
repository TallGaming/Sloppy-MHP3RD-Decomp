/*
 * Purpose hypothesis: remove the power-of-two factor from an unsigned value
 * in place by shifting it right by its trailing-zero count, then return that
 * count.  Zero remains zero and returns a count of 32.
 */
typedef unsigned int u32;

int FUN_0880cb1c(u32 *value)
{
    u32 shifted = *value;
    int count = 0;

    if (!shifted) {
        return 32;
    }
    while (!(shifted & 1)) {
        shifted >>= 1;
        count++;
    }
    *value = shifted;
    return count;
}
