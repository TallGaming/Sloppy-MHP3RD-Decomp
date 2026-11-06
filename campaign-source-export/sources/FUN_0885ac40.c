/*
 * Purpose: copy the fixed seven-word audio body and submit operation 2.
 *
 * Synthetic target flow established the 28-byte template extent, its true
 * address binding, the two call lanes, and return-value forwarding.
 */
typedef unsigned int u32;

typedef struct AudioBody0885ac40 {
    u32 word[7];
} AudioBody0885ac40;

extern AudioBody0885ac40 D_08965e80;
extern unsigned int FUN_0885a7ec(const AudioBody0885ac40 *body, unsigned int operation);

unsigned int FUN_0885ac40(void)
{
    AudioBody0885ac40 body = D_08965e80;

    return FUN_0885a7ec(&body, 0x10000002);
}
