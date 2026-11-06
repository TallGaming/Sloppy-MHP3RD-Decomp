/* Purpose: activate a short queue entry while holding the subsystem lock. */
extern unsigned int FUN_08960bb0(void);
extern void FUN_08960b88(unsigned int state);
extern unsigned int FUN_088eeb30(void);

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_088659c4(void *entry)
{
    unsigned int state;
    if (FIELD(entry, unsigned short, 6) >= 0x20)
        return;
    state = FUN_08960bb0();
    FIELD(entry, unsigned int, 0x0c) &= 0xffff7fff;
    FIELD(entry, unsigned int, 0x0c) |= 0x4000;
    FIELD(entry, unsigned int, 0) = FUN_088eeb30();
    FIELD(entry, unsigned short, 4) = 0;
    FUN_08960b88(state);
}
