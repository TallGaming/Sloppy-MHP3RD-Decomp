/*
 * FUN_088aa5f4: test one indexed bit in a 64-bit flag pair.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 * PARKED: GCC lowers the split 64-bit bit test with a different shape.
 */

typedef unsigned int u32;
typedef unsigned long long u64;

int FUN_088aa5f4(void *unused, const u32 *flags, u32 bit_index)
{
    u32 high_mask = 1u << bit_index;
    u32 low_mask = 0;
    int result = 0;

    if (bit_index < 32) {
        low_mask = 1u << bit_index;
        high_mask = 0;
    }
    if ((flags[1] & high_mask) != 0) {
        result = 1;
    } else if ((flags[0] & low_mask) != 0) {
        result = 1;
    }
    return result;
}
