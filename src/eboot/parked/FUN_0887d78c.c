/* Purpose: set one bit in a large global bitset. */
extern unsigned char *D_08aace80;

void FUN_0887d78c(unsigned int unused, unsigned int bit)
{
    unsigned int *word = (unsigned int *)(D_08aace80 + 0x5f9a0) +
                         ((bit & 0xffff) >> 5);
    (void)unused;
    *word |= 1u << (bit & 0x1f);
}
