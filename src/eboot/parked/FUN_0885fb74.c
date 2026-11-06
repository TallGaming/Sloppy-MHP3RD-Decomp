/*
 * Purpose: record the local wrapper dataflow before the lookup ownership and
 * complete callee ABI are recovered.  This is an uncompiled field view.
 */
#include <stdint.h>

/* Provisional only: synthetic witnesses support this value flow, not its ABI. */
extern uint8_t *FUN_0885f710(uint32_t key, uint8_t selector);

uint8_t *FUN_0885fb74(uint32_t key, uint32_t selector)
{
    uint8_t *lookup_result = FUN_0885f710(key, (uint8_t)selector);

    return lookup_result != 0 ? lookup_result + 24 : 0;
}
