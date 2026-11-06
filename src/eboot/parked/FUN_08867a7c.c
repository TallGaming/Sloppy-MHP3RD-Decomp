/* Purpose: normalize a signed two-digit index within the available page count. */
extern short FUN_0886777c(void);

int FUN_08867a7c(unsigned int unused, short value)
{
    int normalized = value;
    (void)unused;
    if (normalized > 0) {
        short pages = FUN_0886777c();
        short page = value / 100;
        if ((short)(pages - 1) < page)
            page = pages - 1;
        return (short)(value % 100 + page * 100);
    }
    while (normalized < 0) {
        int next = (short)((short)normalized + 100);
        if (next >= 0)
            return next;
        normalized = (short)((short)normalized + 200);
    }
    return normalized;
}
