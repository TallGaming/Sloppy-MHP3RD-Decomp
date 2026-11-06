/*
 * FUN_08944068: return VALUE when LEFT equals RIGHT, else 4 or 0x21 by ordering.
 *
 * Main EBOOT, attempt-high-01 batch 3. Parameter meanings are hypotheses.
 */

typedef unsigned short u16;

u16 FUN_08944068(void *unused, int left, int right, u16 value)
{
    u16 result = 4;

    if (left <= right) {
        result = 0x21;
        if (right <= left)
            result = value;
    }
    return result;
}
