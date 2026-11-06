/*
 * Purpose: set one bit in a 60-bit flag array.
 * Hypothesis: only the low byte of the requested bit index is significant.
 */
void FUN_0886a51c(void *object, unsigned int requested_index)
{
    unsigned int index = requested_index & 0xff;
    if (index < 60) {
        unsigned char *flags = (unsigned char *)object + 0x5138;
        flags[index >> 3] |= (unsigned char)(1 << (index & 7));
    }
}
