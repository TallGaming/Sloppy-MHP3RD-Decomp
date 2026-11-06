/* Purpose: validate every required subsystem condition and report aggregate success. */
extern int FUN_0886baac(void);
extern int FUN_0886b7bc(int, int);
extern int FUN_0886bb70(int);
extern int FUN_0886bbe4(int);
extern int FUN_0886bc60(int);
extern int FUN_0886b838(int, int);

int FUN_0886bcdc(int object)
{
    if (FUN_0886baac() == 0 || FUN_0886b7bc(object, 6) == 0 ||
        FUN_0886b7bc(object, 7) == 0 || FUN_0886b7bc(object, 8) == 0 ||
        FUN_0886bb70(object) == 0 || FUN_0886bbe4(object) == 0 ||
        FUN_0886bc60(object) == 0 || FUN_0886b838(object, 8) == 0 ||
        FUN_0886b838(object, 9) == 0 || FUN_0886b838(object, 10) == 0)
        return 0;
    return 1;
}
