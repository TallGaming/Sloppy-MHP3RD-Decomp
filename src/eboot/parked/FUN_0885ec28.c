/*
 * Purpose: retain the independently supported partial contract for
 * FUN_0885ec28.  This is not a whole-function candidate.
 *
 * Artificial target execution establishes one direct call to FUN_0885e3a0.
 * The first two lanes are forwarded unchanged; lanes three and four are
 * reduced to their low unsigned bytes.  The observed return is the absolute
 * magnitude of synthetic signed callee results.  The callee has no verified
 * public declaration, and artificial caller routes stop on unsupported
 * instructions before the call site, so pointer ownership and the complete
 * callable ABI remain unresolved.
 * Two supported natural C formulations compiled to 68 bytes against the
 * 112-byte target interval, so they remain diagnostics rather than a match.
 */
typedef struct FUN_0885ec28_call_view {
    unsigned int first_lane;
    unsigned int second_lane;
    unsigned char third_lane;
    unsigned char fourth_lane;
} FUN_0885ec28_call_view;
