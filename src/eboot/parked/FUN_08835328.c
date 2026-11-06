/* Purpose: copy a 144-byte global table into caller storage. */
extern unsigned char *D_09bf5250;

unsigned int FUN_08835328(unsigned int *output)
{
    struct Block { unsigned int word[4]; };
    struct Block *destination = (struct Block *)output;
    struct Block *source = (struct Block *)(D_09bf5250 + 0x78c);
    struct Block *end = (struct Block *)(D_09bf5250 + 0x81c);
    do {
        *destination = *source;
        source++;
        destination++;
    } while (source != end);
    return 0;
}
