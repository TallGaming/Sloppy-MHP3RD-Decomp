/* Purpose: register the slot-seven event callback and report a failed registration. */
typedef int (*EventCallback)();

extern int FUN_08839da4(int index, EventCallback callback, void *first, void *second);
extern void FUN_0883942c(int event, void *first, void *second);
extern int FUN_088386c0();

int FUN_08834e34(void *first, void *second)
{
    if (FUN_08839da4(7, FUN_088386c0, first, second) != 0)
        FUN_0883942c(0x8005, first, second);
    return 0;
}

