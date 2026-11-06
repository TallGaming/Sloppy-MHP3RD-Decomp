/* Purpose: copy a 296-byte global table into caller storage. */
extern unsigned char *D_09bf5250;

unsigned int FUN_088314e4(unsigned int *output)
{
    struct Block { unsigned int word[4]; };
    struct Block *destination = (struct Block *)output;
    struct Block *source = (struct Block *)(D_09bf5250 + 0x23bc);
    struct Block *end = (struct Block *)(D_09bf5250 + 0x24dc);
    do {
        *destination = *source;
        source++;
        destination++;
    } while (source != end);
    destination->word[0] = source->word[0];
    destination->word[1] = source->word[1];
    return 0;
}
