/*
 * Purpose hypothesis: leave the allocator's nested critical section.
 *
 * The saved interrupt state is restored only when the shared nesting depth
 * reaches zero. Public allocator calls identify the ignored argument as a
 * _reent context; the interrupt state comes from the paired saved global.
 */
struct _reent;
extern unsigned int D_08a1bf18;
extern unsigned int D_08a1bf14;
extern void FUN_08960a68(int saved_state);

void FUN_0880c57c(struct _reent *context)
{
    (void)context;
    if (--D_08a1bf18 == 0)
        FUN_08960a68(D_08a1bf14);
}
