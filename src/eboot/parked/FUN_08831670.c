/*
 * Purpose: retain the observed EABI forwarding interface and state gate for
 * FUN_08831670. This is an uncompiled partial field view, not a candidate.
 * The target forwards every eight integer argument slots to the parked helper,
 * discards its result, then gates later state work on the verified six-byte
 * nonzero predicate. The target's caller/result contract is still unresolved.
 */
#include <stdint.h>

extern uintptr_t FUN_0882f240(uintptr_t, uintptr_t, uintptr_t, uintptr_t,
                              uintptr_t, uintptr_t, uintptr_t, uintptr_t);
extern int FUN_08830550(const signed char *values);

static void FUN_08831670_abi_view(uintptr_t arg0, uintptr_t arg1,
                                  uintptr_t arg2, uintptr_t arg3,
                                  uintptr_t arg4, uintptr_t arg5,
                                  uintptr_t arg6, uintptr_t arg7,
                                  const signed char *state_six_bytes) {
    (void)FUN_0882f240(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    if (FUN_08830550(state_six_bytes) == 0) {
        /* The following global-state update is not reconstructed yet. */
    }
}
