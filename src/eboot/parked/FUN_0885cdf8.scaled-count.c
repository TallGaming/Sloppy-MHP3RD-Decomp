/* Purpose: express the seven caller-supported selector queries as a natural C candidate. */
typedef unsigned char u8;
typedef signed char s8;

extern int FUN_0885cafc(void *context, const u8 *key, u8 selector);

int FUN_0885cdf8(void *context, const u8 *keys, u8 selector)
{
    int first;
    first = FUN_0885cafc(context, keys + 1168, selector);
    if (first != 0) {
        s8 count = 1;
        if (FUN_0885cafc(context, keys + 1232, 1))
            ++count;
        if (FUN_0885cafc(context, keys + 1168, 1))
            ++count;
        if (FUN_0885cafc(context, keys + 1184, 1))
            ++count;
        if (FUN_0885cafc(context, keys + 1200, 1))
            ++count;
        if (FUN_0885cafc(context, keys + 1216, 1))
            ++count;
        if (FUN_0885cafc(context, keys + 1144, 1))
            ++count;
        first = (s8)(first * count);
    }
    return first;
}
