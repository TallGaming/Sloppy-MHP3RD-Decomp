/*
 * Boundary-limited readable hypothesis.
 *
 * Newlib signal.c contains public raise(), whose ABI is the same two-argument
 * reentrant forwarding shape as the earlier malloc hypothesis.  The preceding
 * verified _init_signal_r block at 0x0880df50 makes the signal family the
 * stronger provenance lead.  This covers only 0x0880e0a0..0x0880e0cc.
 */
extern void *FUN_0880b474(void);
extern int FUN_0880dfb4(void *, int);

int FUN_0880e0a0(int signal_number)
{
    return FUN_0880dfb4(FUN_0880b474(), signal_number);
}
