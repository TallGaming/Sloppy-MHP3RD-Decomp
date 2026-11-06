/*
 * Purpose: retain the only defensible source-level finding for FUN_0882df1c:
 * it belongs to the nearby encoded-text helper cluster but its public ABI and
 * ownership remain unverified.
 *
 * This is an investigation draft, not a candidate implementation.  The
 * independently decoded control-flow metadata establishes a framed,
 * non-VFPU routine with several calls, but does not establish parameter
 * roles, result ownership, or the contract of the text-width helpers.  In
 * particular, a nearby width helper may return zero for malformed input, so
 * advancing a cursor in a speculative body would invent behavior.
 */
typedef unsigned char u8;
typedef unsigned short u16;

typedef struct EncodedTextCursorHypothesis {
    const u8 *cursor;
    const u8 *limit;
} EncodedTextCursorHypothesis;

/* No function body is retained until callers establish this routine's ABI. */
