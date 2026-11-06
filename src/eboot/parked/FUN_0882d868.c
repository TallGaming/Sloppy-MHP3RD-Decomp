/*
 * Purpose: encode a bounded UTF-16 string as zero-terminated UTF-8 and
 * return the number of source entries copied. The encoder owns malformed
 * input substitution; this function only preserves its output bytes. The
 * cursor arrays express the recovered stack ABI, not an allocator contract.
 */
typedef unsigned char u8;
typedef unsigned short u16;

extern void FUN_0882d730(void *context, void **cursor, unsigned int value);

int FUN_0882d868(void *context, u8 *destination, int capacity,
                 const u16 *source)
{
    int copied = 0;
    u8 encoded[4];
    void *cursor[3];

    if (capacity > 0) {
        capacity--;
        if (*source != 0) {
            do {
            int encoded_size;
            u8 *scan;

            cursor[0] = encoded;
            FUN_0882d730(context, cursor, *source++);
            encoded_size = (u8 *)cursor[0] - encoded;
            if (capacity < encoded_size) {
                break;
            }
            capacity -= encoded_size;
            scan = encoded;
            if (encoded_size != 0) {
                scan = encoded;
                do {
                    *destination++ = *scan++;
                } while (scan != encoded + encoded_size);
            }
            copied++;
            } while (*source != 0);
        }
        *destination = 0;
    }
    return copied;
}
