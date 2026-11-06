/*
 * FUN_0894c96c: submit operations 4 and 6 to the global manager.
 *
 * Main EBOOT, attempt-high-01 batch 4. The operation meanings are hypotheses.
 */

extern void *D_09beb0bc;
void FUN_088fa2b0(void *manager, int operation, int value);
void FUN_08905430(void *manager, int operation, int value);

void FUN_0894c96c(void)
{
    FUN_088fa2b0(D_09beb0bc, 4, 1);
    FUN_08905430(D_09beb0bc, 6, 10);
}
