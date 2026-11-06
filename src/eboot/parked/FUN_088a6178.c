/* Purpose: sum six selector queries and the related base-record query. */
typedef unsigned char u8;

extern void *D_08a3345c;
extern int FUN_0885cafc(void *context, const u8 *key, u8 selector);
extern int FUN_0885cdf8(void *context, const u8 *keys, u8 selector);

int FUN_088a6178(const u8 *keys, u8 selector)
{
    int total;

    total = FUN_0885cafc(D_08a3345c, keys + 1156, selector);
    total += FUN_0885cafc(D_08a3345c, keys + 1232, selector);
    total += FUN_0885cafc(D_08a3345c, keys + 1184, selector);
    total += FUN_0885cafc(D_08a3345c, keys + 1200, selector);
    total += FUN_0885cafc(D_08a3345c, keys + 1216, selector);
    total += FUN_0885cafc(D_08a3345c, keys + 1144, selector);
    return total + FUN_0885cdf8(D_08a3345c, keys, selector);
}
