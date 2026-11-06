/*
 * Purpose/hypothesis: FUN_0880c468 is the three-argument byte-fill helper
 * used by the surrounding runtime.  The call sites pass destination, value,
 * and byte count, and the body returns the original destination.  The target
 * has a short-count guard, byte alignment prologue, a repeated-byte word
 * value, 8-byte and 4-byte stores, then a byte tail.
 *
 * Types are deliberately conservative: the target ABI shows a 32-bit count
 * and a byte value.  `unsigned int` models the word stores without claiming
 * that the original source used a particular library typedef.
 */
typedef unsigned int u32;

void *FUN_0880c468(void *destination, int value, u32 length)
{
    unsigned char *cursor = (unsigned char *)destination;
    unsigned int byte_value = (unsigned int)value & 0xff;
    unsigned int repeated;
    unsigned int *word_cursor;
    unsigned int pair_count;
    unsigned int index;

    if (length < 16) {
        while (length != 0) {
            *cursor++ = (unsigned char)byte_value;
            length--;
        }
        return destination;
    }

    while (((u32)cursor & 3) != 0) {
        *cursor++ = (unsigned char)byte_value;
        length--;
    }

    if (byte_value == 0) {
        repeated = 0;
    } else {
        repeated = byte_value | (byte_value << 8);
        repeated |= repeated << 16;
    }
    word_cursor = (unsigned int *)cursor;

    pair_count = length >> 3;
    length &= 7;
    for (index = 0; index < pair_count; index++) {
        word_cursor[0] = repeated;
        word_cursor[1] = repeated;
        word_cursor += 2;
    }
    if (length >= 4) {
        *word_cursor++ = repeated;
        length -= 4;
    }

    cursor = (unsigned char *)word_cursor;
    while (length != 0) {
        *cursor++ = (unsigned char)byte_value;
        length--;
    }
    return destination;
}
