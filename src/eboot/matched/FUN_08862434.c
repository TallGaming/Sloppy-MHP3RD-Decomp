/*
 * Purpose: check that a range lies within a fixed address window.
 * Hypothesis: the first parameter is unused state retained by the ABI.
 */
unsigned int FUN_08862434(unsigned int unused, unsigned int address, int size)
{
    (void)unused;
    if (address >= 0x08400000) {
        if (address + size <= 0x08800000) {
            return 1;
        }
    }
    return 0;
}
