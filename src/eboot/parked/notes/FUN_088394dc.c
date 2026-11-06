/*
 * Purpose: partial recovery of a shared state-initialization helper.
 *
 * Target-specific evidence: twenty-one direct call sites across eleven
 * callers reach this 216-byte helper.  Its entry consumes no incoming PSP
 * integer argument lane before local setup, and it directly invokes the
 * verified three-argument byte-fill wrapper once, with zero as the fill value
 * and 20 as the observed extent; only its derived destination is unbound.
 * Five direct call sites
 * subsequently read the return lane, whose final shape is memory-derived, so
 * neither a void result nor a precise result type is safe to assert yet.
 *
 * This is deliberately an uncompiled partial declaration view.  The
 * byte-fill destination, value, extent, and the helper's result construction
 * remain unbound.  A guessed global object layout or guessed return type
 * would not be a natural source candidate.
 */
typedef unsigned int u32;

/* Independently supported byte-fill ABI, including destination result. */
void *FUN_088ebb10(void *destination, int value, u32 size);
