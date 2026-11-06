/* Purpose: sum three subsystem query results. */
extern int FUN_0886bfc8(void);
extern int FUN_0886c0c8(unsigned int value);
extern int FUN_0886c198(unsigned int value);

int FUN_0886c234(unsigned int value)
{
    int first = FUN_0886bfc8();
    int second = FUN_0886c0c8(value);
    int third = FUN_0886c198(value);
    return first + second + third;
}
