/*
 * FUN_0890e074: find an object and apply an operation when it exists.
 *
 * The object and operation parameter types are hypotheses.
 */
extern void *FUN_0890e008(void *key);
extern void FUN_0890db80(void *object, void *value1, void *value2);

int FUN_0890e074(void *key, void *value1, void *value2)
{
    void *object = FUN_0890e008(key);

    if (object != 0) {
        FUN_0890db80(object, value1, value2);
        return 1;
    }
    return 0;
}
