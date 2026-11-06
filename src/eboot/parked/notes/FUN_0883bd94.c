/*
 * Purpose: record the independently observed incoming integer lanes for the
 * unregistered FUN_0883bd94 control-flow recovery.
 *
 * This is deliberately a field view, not a callable candidate: no direct
 * caller has been recovered, both direct callees are PARKED, and object/global
 * ownership is unresolved.  The target reads a1, a2, and a3 before defining
 * them; a0 is not observed as an input in the target body.
 */
#include <stdint.h>

void FUN_0883bd94_field_view(
    uint32_t unused_a0,
    uint32_t input_a1,
    uint32_t input_a2,
    uint32_t input_a3
);
