/*
 * Purpose: test whether a byte appears in a fixed five-byte table.
 * Hypothesis: the table begins at object offset 0x5d4a0.
 */
unsigned int FUN_0886cb18(const void *object, signed char value)
{
    const signed char *entry = (const signed char *)object + 0x5d4a0;
    int remaining = 5;
    do {
        signed char current = *entry;
        remaining--;
        entry++;
        if (value == current) {
            return 1;
        }
    } while (remaining != 0);
    return 0;
}
