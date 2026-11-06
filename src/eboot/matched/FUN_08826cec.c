/* Purpose: query one word of state when the subsystem is available. */
extern int FUN_088287c8(void);
extern void FUN_08828ce4(unsigned int *result);

unsigned int FUN_08826cec(void)
{
    unsigned int result[4];
    if (FUN_088287c8() == 0)
        return 0;
    FUN_08828ce4(result);
    return result[0];
}
