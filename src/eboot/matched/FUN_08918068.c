/*
 * FUN_08918068: report how many leading entries in a two-value state are set.
 *
 * The state meaning is a hypothesis; -1 is treated as the empty sentinel.
 */
struct State08918068 {
    int first;
    int second;
};

extern struct State08918068 *FUN_0891dc58(void);

int FUN_08918068(void)
{
    struct State08918068 *state = FUN_0891dc58();

    if (state->first == -1) {
        return 0;
    }
    if (state->second == -1) {
        return 1;
    }
    return 2;
}
