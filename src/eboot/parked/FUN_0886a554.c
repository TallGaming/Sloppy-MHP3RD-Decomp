/*
 * Purpose: read one bit from a 60-bit flag array.
 * Hypothesis: only the low byte of the requested bit index is significant.
 */
unsigned int FUN_0886a554(const void *object, unsigned int requested_index)
{
    unsigned int index = requested_index & 0xff;
    if (index < 60) {
        const unsigned char *flags = (const unsigned char *)object + 0x5138;
        return (flags[index >> 3] >> (index & 7)) & 1;
    }
    return 0;
}
