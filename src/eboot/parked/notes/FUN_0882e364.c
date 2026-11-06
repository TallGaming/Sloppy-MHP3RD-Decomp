/*
 * Purpose: retain the caller-derived ABI boundary for FUN_0882e364, a
 * scalar packet helper used twice by FUN_0882e570.
 *
 * Each observed call supplies four scalar/register values; the two sites use
 * distinct small selector and width values.  The target contains no direct
 * argument-rooted memory access.  One callee edge is indirect and the
 * recovered boundary reports two callee edges total, so the packet-memory
 * contract may be supplied by unresolved dependencies rather than this
 * routine's direct inputs.  It has two return paths and produces a scalar
 * result.  These facts support a packet-code calculation, but not the
 * meaning, widths, signedness, or operation of its four inputs.
 */
typedef unsigned int u32;

/* Hypothesis: all arguments and the result are scalar packet-code values. */
u32 FUN_0882e364(u32 selector, u32 width, u32 value, u32 options);
