/*
 * Purpose: retain the supported partial input view for FUN_0885e12c.
 *
 * This is not a whole-function candidate.  Artificial scalar probes establish
 * byte reads from the first supplied pointer, with paths that also perform
 * halfword and word reads for high-bit leading bytes.  They establish no
 * stores or direct calls.  The two available callers do not yet establish the
 * complete PSP EABI argument or result contract.  A synthetic path through
 * FUN_0885eda8 reaches this target with two nonzero integer lanes, but this
 * does not determine their pointer/scalar types or the result contract.
 */
#include <stdint.h>

typedef struct FUN_0885e12c_input_view {
    const uint8_t *byte_sequence;
} FUN_0885e12c_input_view;

/* A complete callable signature and source body require caller ABI evidence. */
