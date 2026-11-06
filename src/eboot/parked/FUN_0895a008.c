/*
 * FUN_0895a008: switch tables, destroy the subobject at word 2, then destroy the base.
 *
 * Main EBOOT, attempt-high-01 batch 4. Table and destructor roles are hypotheses.
 */

void FUN_088f9cdc(void *subobject);
void FUN_08818434(void *object);

void FUN_0895a008(void **object)
{
    *object = (void *)0x0896aad0;
    FUN_088f9cdc(object + 2);
    *object = (void *)0x0896a8c0;
    FUN_08818434(object);
}
