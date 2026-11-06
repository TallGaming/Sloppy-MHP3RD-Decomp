/*
 * Purpose: count the set bits in a 60-bit flag array.
 * Hypothesis: the array begins at object offset 0x5138.
 */
int FUN_0886a58c(const void *object)
{
    unsigned int index = 0;
    int count = 0;
    do {
        unsigned int byte_index = index >> 3;
        unsigned int bit_index = index & 7;
        index++;
        count +=
            (((int)*(const unsigned char *)(byte_index +
                                            (unsigned int)object + 0x5138)) >>
             bit_index) & 1;
    } while (index != 60);
    return count;
}
