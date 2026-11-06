/* Purpose: return a global mode pointer or advance the caller value. */
extern void *D_08aace80;
extern int FUN_0886d8a0();

int FUN_0887f468(int value, int mode)
{
    if (mode == 0)
        return FUN_0886d8a0(D_08aace80);
    return value + 1;
}
