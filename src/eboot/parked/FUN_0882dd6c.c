/* Purpose: accept a halfword string containing only spaces before its terminator. */
unsigned int FUN_0882dd6c(unsigned int unused, const short *text)
{
    short value = *text;
    (void)unused;
    for (;;) {
        if (value == 0)
            return 1;
        if (value != 0x20 && value != 0x3000)
            break;
        text++;
        value = *text;
    }
    return 0;
}
