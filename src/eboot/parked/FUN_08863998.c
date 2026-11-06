/* Purpose: derive a block index, optionally update it, then dispatch a transfer. */
extern void FUN_0886233c(void *object, unsigned int block);
extern void FUN_0886278c(void *object, int end, unsigned int value, unsigned int address);

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_08863998(void *object, const void *request)
{
    int offset = FIELD(request, int, 0x0c);
    int base = FIELD(request, int, 4);
    unsigned short index = FIELD(request, unsigned short, 2);
    unsigned int address = offset +
        FIELD(object, int, 0x3a40 + index * 4) * 0x800;
    if (FIELD(request, signed char, 0x19) != 0)
        FUN_0886233c(object, address >> 0x0b);
    FUN_0886278c(object, base + offset, FIELD(request, unsigned int, 8), address);
}
