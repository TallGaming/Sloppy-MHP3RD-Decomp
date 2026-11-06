typedef unsigned char u8;
typedef unsigned int u32;

/*
 * Purpose hypothesis: update indexed word and byte tables in one record.
 *
 * Parked after direct indexed stores and explicit table pointers. GCC 4.0.4
 * represents both large table offsets with a lui plus negative immediate;
 * the reference materializes each as ori from zero, then adds the base.
 * Revisit when an address-legitimization source idiom is found.
 */
void FUN_088ce648(void *base, u32 word, u8 byte, u32 index)
{
    u8 *record = (u8 *)base;
    u8 *bytes = record + 0x9a68;
    u32 *words = (u32 *)(record + 0x9a34);

    index &= 0xff;
    words[index] = word;
    bytes[index] = byte;
}
