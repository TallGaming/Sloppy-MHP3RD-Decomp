/*
 * Purpose: normalize a positive status from the queried subsystem to zero.
 * Hypothesis: negative and zero values are passed through to the caller.
 */
extern int FUN_088582bc(void);

int FUN_08858774(void)
{
    int result = FUN_088582bc();
    if (result > 0) {
        result = 0;
    }
    return result;
}
