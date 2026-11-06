/*
 * Purpose: retain the verified external-call interface for an incomplete
 * game-code recovery. This is an uncompiled field/ABI view, not a candidate.
 * The recovered interval has two registered-C dependencies. The sole caller
 * forwards its EABI integer argument slots at the direct call site. The
 * following interval at 0x088386c0 is a separate gap and supplies no ABI or
 * ownership evidence for this function.
 */
extern int FUN_088305b4(const void *left, const void *right);
extern int FUN_08830550(const signed char *values);

/* No FUN_08838528 definition: the target memory flow is not recovered. */
