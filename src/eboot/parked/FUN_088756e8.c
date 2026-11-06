/* Purpose: move two words to an output slot and rewrite their source header. */
#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_088756e8(void *object, unsigned int value, int output_index,
                  int object_index)
{
    unsigned char *slot = (unsigned char *)object + object_index * 4;
    unsigned int *source = FIELD(slot, unsigned int *, 0x144);
    unsigned int second = source[1];
    unsigned int *output = (unsigned int *)(value + output_index * 4 - 8);
    output[0] = source[0];
    FIELD(slot, unsigned int *, 0x144) = output;
    output[1] = second;
    source[1] = (value & 0xffffff) | 0x08000000;
    source[0] = ((value & 0xff000000) >> 8) | 0x10000000;
}
