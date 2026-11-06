/*
 * Purpose: decode a bounded text value into 16-bit character entries and
 * return the number stored. This is a recovered game-code diagnostic; its
 * context and decoder ownership remain unresolved. The four-slot cursor view
 * is retained because recovered ABI evidence uses that stack shape.
 */
typedef unsigned short u16;

extern int FUN_0882d590(void *context, void **cursor);

int FUN_0882d66c(void *context, u16 *destination, int capacity,
                 void *source)
{
    void *cursor[4];
    int count = 0;

    cursor[0] = source;
    if (capacity > 0) {
        for (;;) {
            int decoded;

            capacity--;
            decoded = FUN_0882d590(context, cursor);
            if (decoded == 0 || capacity < 1) {
                break;
            }
            *destination++ = (u16)decoded;
            count++;
        }
        *destination = 0;
    }
    return count;
}
