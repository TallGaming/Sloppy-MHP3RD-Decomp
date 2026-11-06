/*
 * Purpose hypothesis: return the thread-local newlib reentrancy context, or
 * the process-wide fallback when that context is absent.
 *
 * The target obtains the per-thread value from the platform-reserved k0
 * register at offset 4.  The fixed compiler has neither a thread-pointer
 * builtin nor C TLS support, and direct register naming is not permitted in
 * matching source.  This draft preserves the fallback behavior only.
 */
extern void *D_0897bcb0;

void *FUN_0880b474(void)
{
    return D_0897bcb0;
}
