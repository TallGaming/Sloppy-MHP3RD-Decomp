/* Purpose: mark a short queue entry for the second completion state. */
extern unsigned int FUN_08960bb0(void);
extern void FUN_08960b88(unsigned int state);

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_08865a48(void *entry)
{
    unsigned int state;
    if (FIELD(entry, unsigned short, 6) >= 0x20)
        return;
    state = FUN_08960bb0();
    FIELD(entry, unsigned int, 0x0c) =
        (FIELD(entry, unsigned int, 0x0c) & 0xffffbfff) | 0x8000;
    FUN_08960b88(state);
}
