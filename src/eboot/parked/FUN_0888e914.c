/* Purpose: test one byte in a large indexed record array. */
unsigned int FUN_0888e914(unsigned int unused, const void *base, int index)
{
    (void)unused;
    return *((const signed char *)base + index * 0x6b100 + 0x1012) != 0;
}
