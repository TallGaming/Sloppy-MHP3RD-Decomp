/* Purpose: compute a base float value and apply an optional active-character multiplier. */
extern void *D_09bb7a80;
extern float FUN_08906ab8(void *);
extern int FUN_0886f274(void *, void *);
extern int FUN_0890681c(void *, int);
extern int FUN_088b7518(void *);
extern int FUN_088b89fc(void *);
extern float func_0x09cb120c(int);

float FUN_0886f43c(void *object, void *entry)
{
    float result = FUN_08906ab8(entry);
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
        result *= func_0x09cb120c(active);
    return result;
}
