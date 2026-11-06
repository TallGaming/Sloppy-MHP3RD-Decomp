typedef signed char s8;

/*
 * Purpose hypothesis: report whether any of six signed bytes is nonzero.
 * A counted do-while loop retains a pointer walk and an increasing counter.
 */
int FUN_08830550(const s8 *values)
{
    int found = 0;
    int index;

    index = 0;
    do {
        if (*values != 0) {
            found = 1;
        }
        index++;
        values++;
    } while (index != 6);
    return found;
}
