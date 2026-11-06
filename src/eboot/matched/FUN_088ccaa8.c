/*
 * FUN_088ccaa8: obtain an object from a value, then forward that object.
 *
 * Main EBOOT, G2 small-frame matching. Names and types are hypotheses.
 */

void *FUN_08864f48(void *value, int index);
int FUN_0889c0ec(void *object);

int FUN_088ccaa8(void *unused, void *value)
{
    void *object = FUN_08864f48(value, 0);
    return FUN_0889c0ec(object);
}
