/*
 * Purpose: clear a two-halfword state and report whether it was active.
 * Hypothesis: the first halfword is the active value and the second is
 * auxiliary state.
 */
unsigned int FUN_0887f3d4(unsigned int unused, short *state)
{
    short previous = state[0];
    (void)unused;
    state[1] = 0;
    if (previous == 0) {
        return 0;
    }
    state[0] = 0;
    return 1;
}
