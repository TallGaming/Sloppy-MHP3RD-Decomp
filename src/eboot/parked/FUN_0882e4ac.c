/* Purpose: copy five words from a halfword-aligned global record. */
extern unsigned short D_08a29ed2[];

void FUN_0882e4ac(unsigned int *output)
{
    unsigned short *source = D_08a29ed2;
    output[0] = source[0] | (source[1] << 16);
    output[1] = source[2] | (source[3] << 16);
    output[2] = source[4] | (source[5] << 16);
    output[3] = source[6] | (source[7] << 16);
    output[4] = source[8] | (source[9] << 16);
}
