/* Purpose: clear the current ring entry and advance its 7-bit index. */
#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_08864b0c(void *object)
{
    struct Entry {
        unsigned short active;
        unsigned char unknown[30];
    };
    int index = FIELD(object, int, 0x108c);
    FIELD(object, unsigned int, 0x1094) = 0;
    index[(struct Entry *)((unsigned char *)object + 0x8c)].active = 0;
    FIELD(object, unsigned int, 0x108c) = (index + 1) & 0x7f;
}
