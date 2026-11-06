typedef int (*Callback)(void);

/* Purpose hypothesis: register a callback and signal its successful result. */
extern int FUN_08839da4(int, Callback, void *, void *);
extern void FUN_0883942c(int, void *, void *);
extern int FUN_08830ed4(void);

int FUN_08830af8(void *first, void *second)
{
    if (FUN_08839da4(3, FUN_08830ed4, first, second) != 0) {
        FUN_0883942c(0x8005, first, second);
    }
    return 0;
}
