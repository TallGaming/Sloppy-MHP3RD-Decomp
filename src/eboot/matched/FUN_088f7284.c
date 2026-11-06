/*
 * FUN_088f7284: apply operations 5 and 4 to the same pair of objects.
 *
 * Main EBOOT, G2 high-address slice. Names and types are hypotheses.
 */

void FUN_088f6fa0(void *first, void *second, int operation);

void FUN_088f7284(void *first, void *second)
{
    FUN_088f6fa0(first, second, 5);
    FUN_088f6fa0(first, second, 4);
}
