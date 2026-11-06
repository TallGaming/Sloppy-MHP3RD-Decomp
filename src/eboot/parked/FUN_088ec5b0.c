/*
 * FUN_088ec5b0: replace a global value with its input clamped to 0..127.
 *
 * Main EBOOT, G2 high-address branch slice. The global value's role is a hypothesis.
 */

int FUN_088ec5b0(int value)
{
    int *global = (int *)0x09bea774;
    int previous;

    if (value < 0) {
        previous = *global;
        *global = 0;
        return previous;
    }
    if (value > 0x7f)
        value = 0x7f;
    previous = *global;
    *global = value;
    return previous;
}
