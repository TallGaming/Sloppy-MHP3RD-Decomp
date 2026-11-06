/*
 * Purpose: report whether a subsystem query returns a positive status.
 * Hypothesis: zero and negative values both mean unavailable.
 */
extern int FUN_0885a718(void);

unsigned int FUN_0885467c(void)
{
    int status = FUN_0885a718();
    unsigned int available = 1;
    if (status < 0) {
        available = 0;
    } else if (status == 0) {
        available = 0;
    }
    return available;
}
