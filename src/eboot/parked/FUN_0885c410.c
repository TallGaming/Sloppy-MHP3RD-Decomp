/*
 * Purpose: record the supported first-entry dispatcher shape for FUN_0885c410.
 * This is an uncompiled field view. The dispatch table has no verified binding
 * or entry prototype, so it is not a whole-function candidate.
 */
#include <stdint.h>

typedef int32_t (*DispatchEntry)(void *base, uint32_t index);

extern DispatchEntry D_unbound_dispatch_table[];

int32_t FUN_0885c410(void *base, uint32_t selector, uint32_t index)
{
    return D_unbound_dispatch_table[selector](base, index);
}
