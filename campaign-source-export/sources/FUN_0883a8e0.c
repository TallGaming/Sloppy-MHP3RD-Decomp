/*
 * Purpose: preserve the supported field-level view of FUN_0883a8e0.
 *
 * The target is a framed Group-B coordinator with three conditional paths.
 * It directly calls the verified six-byte shared-record predicate
 * FUN_0883a8ac and two PARKED dependencies.  It reads a dense state/object
 * field set and writes a small output/header field set.  The text census has
 * no direct caller, and the two unclassified dependencies have no confirmed
 * callable ABI.  Therefore this is deliberately an uncompiled field view,
 * not a whole-function C candidate.
 */

typedef unsigned char u8;
typedef unsigned int u32;

typedef struct Fun0883a8e0Fields {
    u8 unresolved_prefix[8];
    u32 output_words[5];
    u8 unresolved_body[4140];
    u32 state_word;
} Fun0883a8e0Fields;

/* Verified dependency: compares an incoming six-byte record with shared state. */
extern int FUN_0883a8ac(const void *record);

/*
 * Direct dependencies FUN_0882e484 and FUN_0883a654 remain intentionally
 * undeclared: their PARKED drafts do not establish their callable ABI.
 * No definition is supplied until a real caller or ownership context proves
 * the target input roles, return use, and the state/header object layout.
 */
