/*
 * Purpose: retain the partial orchestration view for FUN_08854d84.
 *
 * The target has three direct calls.  Artificial scalar-float probe cases all
 * reach them in the sequence represented below, and changing the artificial
 * incoming integer changes the call-state of one dependency.  The first two
 * dependencies are not ABI-confirmed (one is PARKED and the other is active),
 * while the third is a verified two-u16 forwarding wrapper.  The target also
 * performs scalar-float memory traffic and conditional selection.  These facts
 * support an orchestration role but not a compilable signature or candidate.
 */
#include <stdint.h>

typedef struct FUN_08854d84_OrchestrationView {
    uint32_t unknown_input_state;       /* At least one callee state varies with input. */
    float saved_or_loaded_scalar;       /* Scalar float memory traffic is present. */
    uint16_t final_forwarded_pair[2];   /* FUN_088543ec's independently reviewed ABI. */
} FUN_08854d84_OrchestrationView;

/*
 * Hypothesized only as control ordering; this is intentionally not a body.
 * FUN_08854c4c and FUN_08854cf4 have no confirmed callable prototypes.
 */
typedef struct FUN_08854d84_CallOrderView {
    uint32_t first_scalar_dependency;   /* FUN_08854c4c */
    uint32_t second_unknown_dependency; /* FUN_08854cf4 */
    uint32_t final_u16_dispatch;        /* FUN_088543ec */
} FUN_08854d84_CallOrderView;
