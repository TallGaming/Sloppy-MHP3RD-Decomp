/*
 * FUN_08921f78: map state 2 to 1, state 3 to 2, and other states to 0.
 *
 * Main EBOOT, attempt-high-01 batch 3. State meanings and unused context are hypotheses.
 */

typedef signed char s8;

int FUN_08921f78(void *unused, s8 state)
{
    int result = 1;

    if (state == 2)
        return result;
    result = 0;
    if (state != 3)
        return result;
    return 2;
}
