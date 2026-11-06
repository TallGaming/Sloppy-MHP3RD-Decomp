/* Purpose: express the seven caller-supported selector queries as a natural C candidate. */
typedef unsigned char u8;

extern int FUN_0885cafc(void *context, const u8 *key, u8 selector);

int FUN_0885cdf8(void *context, const u8 *keys, u8 selector)
{
    int total;

    total = FUN_0885cafc(context, keys + 1168, selector);
    if (total == 0) {
        return 0;
    }
    total += FUN_0885cafc(context, keys + 1232, 1) != 0;
    total += FUN_0885cafc(context, keys + 1168, 1) != 0;
    total += FUN_0885cafc(context, keys + 1184, 1) != 0;
    total += FUN_0885cafc(context, keys + 1200, 1) != 0;
    total += FUN_0885cafc(context, keys + 1216, 1) != 0;
    total += FUN_0885cafc(context, keys + 1144, 1) != 0;
    return total;
}
