/*
 * FUN_08945f0c: prepare the subsystem, run an operation, and finalize on success.
 *
 * Main EBOOT, G2 final frame-and-branch slice. Function roles are hypotheses.
 */

void FUN_089029f4();
int FUN_08945ab0(void *object);
void FUN_08945d34(void *object);

int FUN_08945f0c(void *object)
{
    int result;

    FUN_089029f4();
    result = FUN_08945ab0(object);
    if (result != 0)
        FUN_08945d34(object);
    return result;
}
