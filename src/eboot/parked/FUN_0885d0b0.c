/*
 * Purpose: retain the supported ABI/dataflow field view for FUN_0885d0b0.
 *
 * The target reads selector category at +1 and an unsigned halfword at +2.
 * Categories 0 through 17 select distinct unlabeled indirect tail targets.
 * Each tail transfer receives a zero first integer lane and the selector in
 * its second lane. Categories 18 and above return directly. The target has
 * no stores and no direct calls. The distinct tail addresses lack public
 * labels and callable contracts, so this is intentionally an uncompiled
 * partial view, not a complete candidate.
 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

typedef struct SelectorTailInput {
    u8 unknown_0;
    u8 category;
    u16 index;
} SelectorTailInput;

typedef u32 (*SelectorTailTarget)(u32 zero, const SelectorTailInput *selector);

/* The original function's return contract remains unresolved. */
u32 FUN_0885d0b0_field_view(void *unused, const SelectorTailInput *selector);
