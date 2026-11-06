/* Purpose: launch the secondary checksum worker and pass it the owning object. */
extern int FUN_08960bd0(const char *, void *, int, int, int, int);
extern void FUN_08960b78(int, int, void *);
extern const char s_checkSumThread2G_08966ed0[];
extern void FUN_0888eaa0(void);

void FUN_0888e65c(unsigned char *object)
{
    int argument[4];
    int thread;

    object[0x6548] = 1;
    object[0x654a] = 0;
    thread = FUN_08960bd0(s_checkSumThread2G_08966ed0, FUN_0888eaa0, 0x35, 0x400, 0, 0);
    *(int *)(object + 0x6544) = thread;
    argument[0] = (int)object;
    FUN_08960b78(thread, 4, argument);
}
