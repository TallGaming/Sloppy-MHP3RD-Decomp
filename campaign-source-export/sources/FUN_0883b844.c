/*
 * Purpose hypothesis: FUN_0883b844 coordinates a small, repeated sequence of
 * game calls while retaining its first input as a context pointer.
 *
 * This is an uncompiled ABI/field view, not a function-body candidate.  The
 * target preserves a0 in a callee-saved register used for memory accesses and
 * has six distinct direct callee targets across 21 calls.  Current private
 * callee lookups do not supply declared prototypes, and no direct caller or
 * nearby code materialization establishes the pointed-to layout or remaining
 * argument types.
 */
#include <stdint.h>

typedef struct FUN_0883b844_context FUN_0883b844_context;

typedef struct FUN_0883b844_abi_view {
    FUN_0883b844_context *context_from_a0;
    uintptr_t unresolved_a1;
    uintptr_t unresolved_a2;
    uintptr_t unresolved_a3;
} FUN_0883b844_abi_view;
