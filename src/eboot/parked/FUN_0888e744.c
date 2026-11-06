/* Purpose: launch the checksum-calculation worker and pass it the owning object. */
extern int FUN_08960bd0(const char *, void *, int, int, int, int);
extern void FUN_08960b78(int, int, void *);
extern const char s_calcSumThread_08966ef4[];
extern void FUN_0888f730(void);

void FUN_0888e744(unsigned char *object)
{
    int argument[4];
    int thread;

    object[0x6548] = 1;
    thread = FUN_08960bd0(s_calcSumThread_08966ef4, FUN_0888f730, 0x35, 0x400, 0, 0);
    *(int *)(object + 0x6540) = thread;
    argument[0] = (int)object;
    FUN_08960b78(thread, 4, argument);
}
