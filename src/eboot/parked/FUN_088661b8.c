/* Purpose: import four enabled state bits into the global subsystem state. */
extern void *D_08aace80;

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_088661b8(void *source)
{
    unsigned int bit;
    for (bit = 0x1a; bit < 0x1e; bit++) {
        unsigned int mask = 1u << ((bit - 6) & 0x1f);
        unsigned int flags = FIELD(D_08aace80, unsigned int, 0x5fad4);
        unsigned int source_flags;
        if ((flags & mask) != 0)
            continue;
        if (bit < 0x20)
            source_flags = FIELD(source, unsigned int, 0x5fbf4);
        else
            source_flags = FIELD(source, unsigned int, 0x5fbf8);
        if ((source_flags & (1u << (bit & 0x1f))) != 0)
            FIELD(D_08aace80, unsigned int, 0x5fad4) = flags | mask;
    }
}
