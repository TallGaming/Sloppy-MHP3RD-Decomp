/*
 * Purpose hypothesis: FUN_0883b480 is a game-owned, non-leaf operation that
 * consumes four integer ABI slots and coordinates four known direct callees.
 *
 * This is deliberately an uncompiled partial ABI/field view, not a candidate
 * body.  The target has multiple loads and stores, but caller-side object
 * provenance and field offsets have not been recovered, so naming parameters
 * or inventing an opaque implementation would misstate the evidence.
 */
#include <stdint.h>

typedef struct FUN_0883b480_context FUN_0883b480_context;

/* PSP EABI observations: all four integer entry slots are live before a local
 * definition.  Their types, ownership, and whether any form a split argument
 * remain unresolved pending caller dataflow recovery. */
typedef struct FUN_0883b480_abi_view {
    FUN_0883b480_context *slot_a0;
    uintptr_t slot_a1;
    uintptr_t slot_a2;
    uintptr_t slot_a3;
} FUN_0883b480_abi_view;
