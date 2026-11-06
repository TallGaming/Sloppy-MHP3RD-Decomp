/*
 * Purpose: retain the supported dependency and control-shape view for
 * FUN_0885d560's multi-branch state update.
 *
 * This is not a whole-function candidate.  The target creates a local frame,
 * performs 23 local-word stores, uses halfword and byte fields through several
 * saved bases, and directly calls three still-PARKED game functions.  The two
 * declared caller sites populate materially different lane states, so neither
 * a single input structure nor a callable signature is currently justified.
 */
#include <stdint.h>

typedef struct FUN_0885d560_FieldView {
    uint8_t unknown;
} FUN_0885d560_FieldView;

/*
 * Unresolved dependencies observed at direct call sites:
 * FUN_0887d7d8 (twice), FUN_0887ea9c (twice), FUN_0887f018 (once).
 * Their parked source views are useful semantic leads but are not confirmed
 * prototypes for compiling this wrapper.
 */
