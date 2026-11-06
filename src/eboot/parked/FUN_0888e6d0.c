/* Purpose: launch the primary checksum worker with a requested checksum mode. */
extern int FUN_08960bd0(const char *, void *, int, int, int, int);
extern void FUN_08960b78(int, int, void *);
extern const char s_checkSumThread_08966ee4[];
extern void FUN_0888e5c4(void);

void FUN_0888e6d0(unsigned char *object, unsigned char mode)
{
    int argument[4];
    int thread;

    object[0x654a] = mode;
    object[0x6548] = 1;
    thread = FUN_08960bd0(s_checkSumThread_08966ee4, FUN_0888e5c4, 0x35, 0x400, 0, 0);
    *(int *)(object + 0x6544) = thread;
    argument[0] = (int)object;
    FUN_08960b78(thread, 4, argument);
}
