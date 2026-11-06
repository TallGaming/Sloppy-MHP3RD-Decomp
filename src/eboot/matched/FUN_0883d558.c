/* Purpose: increment and clamp a counter when a query succeeds. */
extern int FUN_088a52b0(unsigned int value, unsigned int selector);

int FUN_0883d558(unsigned int unused, unsigned int value, int count)
{
    (void)unused;
    if (FUN_088a52b0(value, 0x17) != 0) {
        count++;
        if (count > 5)
            count = 5;
    }
    return count;
}
