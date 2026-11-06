/* Purpose: advance two modular random states and combine their low words. */
#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

int FUN_08862700(void *object)
{
    unsigned int first = (FIELD(object, int, 0x2f540) * 0x2345u) % 0xffd9u;
    unsigned int second = (FIELD(object, int, 0x2f53c) * 0x7f8du) % 0xfff1u;
    FIELD(object, unsigned int, 0x2f540) = first;
    FIELD(object, unsigned int, 0x2f53c) = second;
    return first * 0x10000 + second;
}
