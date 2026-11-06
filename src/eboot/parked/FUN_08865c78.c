/* Purpose: reset a queue entry to its default control and buffer settings. */
extern unsigned int FUN_08960bb0(void);
extern void FUN_08960b88(unsigned int state);
extern void FUN_08865aac(void *entry);

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_08865c78(void *entry)
{
    unsigned int state = FUN_08960bb0();
    FIELD(entry, unsigned short, 0x14) = 0x2000;
    FIELD(entry, unsigned short, 0x16) = 0x80ff;
    FIELD(entry, unsigned short, 0x18) = 0x5fc0;
    FIELD(entry, void *, 0x24) = (void *)0x08a33e30;
    FIELD(entry, unsigned int, 0x28) = 0x10;
    FIELD(entry, unsigned int, 0x0c) = 0x8c04;
    FIELD(entry, unsigned short, 0x10) = 0;
    FIELD(entry, unsigned short, 0x12) = 0;
    FIELD(entry, unsigned short, 0x20) = 0;
    FIELD(entry, unsigned short, 0x22) = 0;
    FIELD(entry, unsigned int, 0) = 0;
    FIELD(entry, unsigned short, 4) = 0;
    FUN_08960b88(state);
    FUN_08865aac(entry);
}
