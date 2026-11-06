/* Register the game event callback for slot six and report registration failure. */
typedef int (*EventCallback)();

extern int FUN_08833d24();
extern int FUN_08839da4(int index, EventCallback callback, void *first, void *second);
extern void FUN_0883942c(int event, void *first, void *second);

int FUN_08832600(void *first, void *second)
{
    if (FUN_08839da4(6, FUN_08833d24, first, second) != 0)
        FUN_0883942c(0x8005, first, second);
    return 0;
}
