/*
 * FUN_08922330: map state 1 to 2, state 2 to 3, and other states to 1.
 *
 * Main EBOOT, attempt-high-01 batch 3. State meanings and unused context are hypotheses.
 */

typedef signed char s8;

int FUN_08922330(void *unused, s8 state)
{
    int result = 2;

    if (state == 1)
        return result;
    result = 1;
    if (state != 2)
        return result;
    return 3;
}
