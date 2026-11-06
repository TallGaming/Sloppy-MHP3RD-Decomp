/* Purpose: require list groups two and three. */
extern unsigned int FUN_0886b7bc(void *object, int list);
unsigned int FUN_0886ba10(void *object)
{
    if (FUN_0886b7bc(object, 2) == 0 || FUN_0886b7bc(object, 3) == 0) return 0;
    return 1;
}
