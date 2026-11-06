/*
 * Purpose: retain the ABI field view for unregistered control-flow recovery
 * of FUN_0883c154 without inventing the unresolved dependency contracts.
 *
 * The target consumes a1, a2, and a3 before defining those lanes.  Its a0
 * input is not observed.  It calls three PARKED/unclassified dependencies
 * and one verified table lookup, so this declaration is not a callable C
 * candidate.
 */
#include <stdint.h>

void FUN_0883c154_field_view(
    uint32_t unused_a0,
    uint32_t input_a1,
    uint32_t input_a2,
    uint32_t input_a3
);
