/* Purpose: create a semaphore, store its handle, and initialize its queue. */
extern unsigned char D_08965c0c[];
extern int D_08a333c4[];
extern int FUN_08960b30(const char *name, int attributes, int initial,
                        int maximum, int options);
extern void FUN_088597d0(void);

unsigned int FUN_088598d0(void)
{
    D_08a333c4[-14] = FUN_08960b30((const char *)(D_08965c0c + 0x78),
                                    0x100, 1, 1, 0);
    FUN_088597d0();
    return 0;
}
