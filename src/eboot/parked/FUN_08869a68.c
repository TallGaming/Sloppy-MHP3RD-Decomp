/* Purpose: interpolate a value from a key/value curve while caching the current segment. */
extern float D_0896656c;
extern float D_08966570;

void FUN_08869a68(float key, int unused, float *curve, float *output, unsigned char *cache)
{
    unsigned int index;
    float *point;

    (void)unused;
    if (cache == 0) {
        index = 0;
        point = curve;
    } else {
        index = *cache;
        point = curve + index * 2;
    }
    for (;;) {
        float current = point[0];
        while (current == D_0896656c) {
            index = 0;
            key = (float)((int)key % ((int)point[-2] + 1));
            point = curve;
            current = point[0];
        }
        if (current == D_08966570) {
            *output = point[-1];
            break;
        }
        if (current == key) {
            *output = point[1];
            break;
        }
        if (current < key && key < point[2]) {
            *output = point[1] + ((key - current) / (point[2] - current)) *
                      (point[3] - point[1]);
            break;
        }
        index = (index + 1) & 0xff;
        point += 2;
    }
    if (cache != 0)
        *cache = index;
}
