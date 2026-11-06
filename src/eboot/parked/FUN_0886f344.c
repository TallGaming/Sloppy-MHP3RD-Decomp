/* Purpose: compute a base integer value and apply an optional active-character bonus. */
extern void *D_09bb7a80;
extern int FUN_08906c14(void *);
extern int FUN_0886f274(void *, void *);
extern int FUN_0890681c(void *, int);
extern int FUN_088b7518(void *);
extern int FUN_088b89fc(void *);
extern signed char func_0x09cb129c(int);

int FUN_0886f344(void *object, void *entry)
{
    int result = FUN_08906c14(entry);
    int active;

    if (FUN_0886f274(object, entry) == 0)
        return result;
    if (FUN_0890681c(entry, 1) != 0)
        active = FUN_088b89fc(D_09bb7a80);
    else if (FUN_0890681c(entry, 2) != 0)
        active = FUN_088b7518(D_09bb7a80);
    else
        return result;
    if (active != 0)
        result = (signed char)(result + func_0x09cb129c(active));
    return result;
}
