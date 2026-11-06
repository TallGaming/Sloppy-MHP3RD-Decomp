/*
 * Purpose hypothesis: return the next current-reentrancy pseudo-random value.
 *
 * The state at +0xa8 is a 64-bit linear-congruential value.  It is advanced
 * by the public newlib rand multiplier and increment, then its upper 31 bits
 * are returned.  The state type is partial and based only on observed offsets.
 */
typedef unsigned char u8;
typedef unsigned long long u64;

typedef struct ReentState {
    u8 unknown[0xa8];
    u64 rand_next;
} ReentState;

extern ReentState *FUN_0880b474(void);

int FUN_0880d5bc(void)
{
    FUN_0880b474()->rand_next =
        FUN_0880b474()->rand_next * 6364136223846793005ULL + 1;
    return (int)((FUN_0880b474()->rand_next >> 32) & 0x7fffffffU);
}
