/*
 * Purpose: consume a big-endian length-prefixed byte block.
 * Hypothesis: the requested size is clamped before the payload helper runs.
 */
typedef unsigned char u8;
typedef unsigned short u16;

extern void FUN_088ebb18(void *context, const u8 *payload, u16 size);

const u8 *FUN_08830378(void *context, unsigned int requested, const u8 *input) {
    u16 length = ((u16)input[0] << 8) | input[1];
    u16 size = (u16)requested;

    if (size >= length) {
        size = length;
    }

    if (size != 0) {
        FUN_088ebb18(context, input + 2, size);
    }
    return input + length + 2;
}
