/* Purpose: XOR a halfword range with a rotating key derived from its source offset. */
extern unsigned short FUN_0888db24(void *, int);

void FUN_0888db74(void *object, int output_base, int input_base,
                  int output_offset, int input_offset, unsigned int size)
{
    unsigned short *output = (unsigned short *)(output_base + output_offset);
    unsigned short *input = (unsigned short *)(input_base + input_offset);
    unsigned int processed;

    if (size == 0)
        return;
    processed = 0;
    do {
        unsigned short value = *input;
        unsigned short key = FUN_0888db24(object, ((processed + input_offset) & 7) >> 1);
        processed += 2;
        *output = value ^ key;
        input++;
        output++;
    } while (processed < size);
}
