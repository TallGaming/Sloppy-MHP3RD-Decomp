/*
 * FUN_0895a580: install a table, run an initializer, then destroy the base object.
 *
 * Main EBOOT, attempt-high-01 batch 4. Table, initializer and destructor roles are hypotheses.
 */

void FUN_089016c4();
void FUN_08818434(void *object);

void FUN_0895a580(void **object)
{
    *object = (void *)0x0896a9e0;
    FUN_089016c4();
    FUN_08818434(object);
}
