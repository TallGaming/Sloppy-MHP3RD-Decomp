/*
 * FUN_088ef3f8: set a range of bits in the word array at offset 0xF8.
 *
 * Main EBOOT, G2 high-address branch slice. The record layout is a hypothesis.
 */

typedef unsigned char u8;
typedef unsigned int u32;

void FUN_088ef3f8(void *record, u32 first, int count)
{
    u32 end = first + count;

    for (; first < end; first++) {
        u32 adjusted = first + 0x1f;
        int word;

        if ((int)first >= 0)
            adjusted = first;
        word = ((int)adjusted >> 5);
        *(u32 *)((u8 *)record + 0xf8 + word * 4) |= 1 << (first & 0x1f);
    }
}
