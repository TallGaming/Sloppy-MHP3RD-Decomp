/*
 * Purpose: retain the independently supported entry ABI and first dispatch
 * cluster of FUN_0882e570.
 *
 * This is intentionally an uncompiled diagnostic partial, not a whole C
 * candidate.  Two caller forms establish four argument positions, but the
 * target gives its first five dispatches a loaded global context and forwards
 * only argument positions 1-3.  The entry contains at least ten paired
 * unaligned-word transfers across later packed-message paths; their field boundaries and
 * imported helper contracts remain unresolved.
 */
typedef unsigned long uptr;

extern void *D_DISPATCH_GLOBAL_CONTEXT;
extern int FUN_08839e64(void *context, uptr arg1, void *arg2, void *arg3);
extern int FUN_0883a298(void *context, uptr arg1, void *arg2, void *arg3);
extern int FUN_08839fe8(void *context, uptr arg1, void *arg2, void *arg3);
extern int FUN_08839c4c(void *context, uptr arg1, void *arg2, void *arg3);
extern int FUN_0883b644(void *context, uptr arg1, void *arg2, void *arg3);

void FUN_0882e570(void *arg0, uptr arg1, void *arg2, void *arg3)
{
    void *context = D_DISPATCH_GLOBAL_CONTEXT;

    (void)arg0; /* Caller-provided a0 is not directly dereferenced here. */
    (void)context;
    (void)arg1;
    (void)arg2;
    (void)arg3;
    /* Static callee order is retained in the recovery summary.  The 38
     * unresolved state/result tests mean a callable source body is unsafe. */
}
