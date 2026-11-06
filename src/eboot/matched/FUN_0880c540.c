/*
 * Purpose hypothesis: enter the allocator's re-entrant interrupt-protection
 * scope.
 *
 * The paired FUN_0880c57c decrements the same depth counter and restores the
 * saved state through FUN_08960a68 only at depth zero.  Thus FUN_08960a50 is
 * hypothesized to suspend interrupts (rather than acquire a heap mutex).
 * D_08a1bf14 and D_08a1bf18 are direct global candidates recovered from the
 * reference accesses; their names and exact owning structure remain unknown.
 * A local call-site census finds four callers, all allocator-adjacent
 * routines (including allocation, system allocation, and trimming paths).
 * The unchanged public allocator TU identifies this as the __malloc_lock
 * hook. Its _reent context argument is unused here; an unused a0 does not
 * establish a parameterless interface.
 * The local PSP toolchain headers declare sceKernelCpuSuspendIntr(void) and
 * sceKernelCpuResumeIntr(int), matching this pair's observed ABI; the stub
 * NIDs have not been independently mapped here.
 * Newlib 1.15's public mlock.c documents the same recursive malloc-lock
 * contract, but no public whole-unit compiled match has been established.
 */
typedef unsigned int u32;
struct _reent;

extern u32 D_08a1bf14;
extern u32 D_08a1bf18;
int FUN_08960a50(void);

void FUN_0880c540(struct _reent *context)
{
    int previous_interrupt_state;

    (void)context;
    previous_interrupt_state = FUN_08960a50();
    if (D_08a1bf18 == 0)
        D_08a1bf14 = (u32)previous_interrupt_state;
    D_08a1bf18 += 1;
}
