/*
 * Purpose: retain the evidence-backed partial interface view for FUN_08854a48.
 *
 * The target is a leaf scalar-float control-flow routine: it has four scalar
 * comparisons, two float constant loads, and one add/subtract result path.
 * One input reaches the float domain through a raw integer-to-FPR bit move,
 * while the full caller-derived prototype and constants remain unresolved.
 * This is deliberately an uncompiled field view, not a function candidate.
 */
#include <stdint.h>

typedef struct FUN_08854a48_InputView {
    uint32_t float_bits_from_integer_slot; /* Proven bit-pattern transfer. */
    float scalar_lanes[8];                 /* PSP EABI lanes require caller proof. */
} FUN_08854a48_InputView;

typedef struct FUN_08854a48_ControlView {
    float loaded_limit_a;
    float loaded_limit_b;
    float scalar_result;
    uint32_t scalar_compare_count;
} FUN_08854a48_ControlView;
