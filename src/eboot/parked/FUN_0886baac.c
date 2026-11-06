/* Purpose: require all six primary list groups. */
extern unsigned int FUN_0886b7bc(void *object, int list);
unsigned int FUN_0886baac(void *object)
{
    if (FUN_0886b7bc(object, 0) == 0 ||
        FUN_0886b7bc(object, 1) == 0 ||
        FUN_0886b7bc(object, 2) == 0 ||
        FUN_0886b7bc(object, 3) == 0 ||
        FUN_0886b7bc(object, 4) == 0 ||
        FUN_0886b7bc(object, 5) == 0)
        return 0;
    return 1;
}
