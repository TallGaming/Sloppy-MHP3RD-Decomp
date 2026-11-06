/* Purpose: return ten only when the selected byte flag is zero. */
unsigned int FUN_0883ee14(unsigned int unused, signed char choose_fourth,
                          signed char third, signed char fourth)
{
    unsigned int result;
    (void)unused;
    if (choose_fourth != 0)
        third = fourth;
    result = 10;
    if (third != 0)
        result = 0;
    return result;
}
