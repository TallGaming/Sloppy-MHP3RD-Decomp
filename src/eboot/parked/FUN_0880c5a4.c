/*
 * Purpose/hypothesis: obtain a context pointer for the current kernel-thread
 * state.  The reference reads an otherwise-unavailable register-resident
 * kernel context, looks up the signed thread id at +0x37c in a bucketed chain
 * while CPU interrupts are suspended, and returns the pointer at +4 in the
 * selected slot.  Missing register/context paths notify a debug import and
 * fall back to D_0896bcb0.
 *
 * The register-resident source is represented by an ordinary external only
 * to preserve readable behavior; this is the principal exact-match blocker.
 * The table layout, debug import signature, and library lineage remain
 * hypotheses based solely on observed offsets and call ABI.
 */
typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;

#define FIELD(p, t, off) (*(t *)((u8 *)(p) + (off)))

extern void *D_register_context;
extern void *D_08a1bf1c;
extern void *D_0896bcb0;
extern s32 FUN_08960a50(void);
extern void FUN_08960a68(s32 state);
extern void FUN_08960ad0(const char *message, const char *detail);
extern const char D_08963104[];
extern const char D_08963124[];
extern const char D_089630f4[];

void *FUN_0880c5a4(void)
{
    void *kernel_context;
    void *thread_state;
    void *chain;
    void *slot;
    void *result;
    s32 interrupt_state;
    s32 thread_id;
    s32 bucket;

    kernel_context = D_register_context;
    if (kernel_context == 0) {
        if (FUN_08960ad0 != 0)
            FUN_08960ad0(D_08963104, D_089630f4);
        return D_0896bcb0;
    }

    thread_state = FIELD(kernel_context, void *, 4);
    if (thread_state == 0) {
        if (FUN_08960ad0 != 0)
            FUN_08960ad0(D_08963104, D_089630f4);
        return D_0896bcb0;
    }

    interrupt_state = FUN_08960a50();
    thread_id = FIELD(thread_state, s32, 0x37c);
    bucket = thread_id % 32;
    chain = D_08a1bf1c;
    slot = (u8 *)chain + 4 * bucket;
    while (FIELD(slot, s32, 0x84) != thread_id) {
        chain = FIELD(chain, void *, 0);
        if (chain == 0) {
            FUN_08960a68(interrupt_state);
            if (FUN_08960ad0 != 0)
                FUN_08960ad0(D_08963124, D_089630f4);
            return D_0896bcb0;
        }
        slot = (u8 *)chain + 4 * bucket;
    }
    result = FIELD(slot, void *, 4);
    FUN_08960a68(interrupt_state);
    return result;
}
