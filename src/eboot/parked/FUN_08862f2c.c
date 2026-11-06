/*
 * Purpose: test whether a 20-byte table record differs from a reference.
 * Hypothesis: only the low 16 bits of the index select the record.
 */
extern int FUN_0880bff4(const void *left, const void *right, unsigned int size);
extern unsigned char DAT_089a9b48[];
extern unsigned char DAT_08a33468[];

int FUN_08862f2c(unsigned int unused, unsigned int index)
{
    (void)unused;
    return FUN_0880bff4(DAT_089a9b48 + (index & 0xffff) * 20,
                        DAT_08a33468, 20) != 0;
}
