/*
 * Purpose: compare a signed value against the entry selected by an unsigned
 * byte key in a fixed ten-entry two-byte table.
 *
 * The first formal lane is forwarded by the only known caller but is not read
 * by this body. It is retained to preserve the observed call ABI.
 */
typedef unsigned char u8;
typedef signed char s8;

typedef struct {
    u8 key;
    s8 value;
} KeyValuePair;

int FUN_0883d20c(int unused, const KeyValuePair *query,
                 const KeyValuePair *entries)
{
    int remaining = 10;

    (void)unused;
    while (remaining > 0) {
        if (entries->key == query->key) {
            if (query->value <= entries->value) {
                return query->value < entries->value ? -1 : 0;
            }
            return 1;
        }
        entries++;
        remaining--;
    }

    if (query->value <= 0) {
        return query->value < 0 ? -1 : 0;
    }
    return 1;
}
