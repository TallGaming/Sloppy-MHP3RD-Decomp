/*
 * FUN_088ed334: run FUN_088ed208 while holding the lock at 0x09BE9F24.
 *
 * Main EBOOT, G2 high-address slice. The lock and argument types are hypotheses.
 */

void FUN_088ec504(void *lock);
void FUN_088ed208(void *object);
void FUN_088ec518(void *lock);

void FUN_088ed334(void *object)
{
    FUN_088ec504((void *)0x09be9f24);
    FUN_088ed208(object);
    FUN_088ec518((void *)0x09be9f24);
}
