/* Purpose: choose an error/status code from bounds and byte flags. */
extern unsigned int FUN_0883ee14(unsigned int unused, signed char choose_fourth,
                                 signed char third, signed char fourth);

unsigned int FUN_0883ee50(unsigned int context, int left, int right,
                          signed char first, signed char second,
                          signed char stacked)
{
    if (left < right)
        return FUN_0883ee14(context, first, second, stacked);
    if (first != 0 || second != 0)
        return 2;
    return 13;
}
