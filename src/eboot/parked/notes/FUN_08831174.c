/*
 * Purpose: retain the supported recovery boundary for FUN_08831174.
 *
 * This is an uncompiled partial field view, not a whole-function candidate.
 * The target accepts an input-derived state pointer, has multiple return
 * paths, and performs byte, halfword, and word writes after 16 direct calls.
 * FUN_088ebb18 is a verified three-argument copy wrapper.  The actual
 * arguments at its eight call sites and the real ABI of FUN_088ebb10 remain
 * unresolved.  Other direct callees have no verified ABI context.  A
 * whole-reference direct-call scan found no callers, so callback or table
 * ownership is also unproved.
 */

typedef struct FUN_08831174_State FUN_08831174_State;

/* Verified shared context: memcpy-style wrapper; its result is ignored. */
extern void FUN_088ebb18(void *dst, const void *src, unsigned int size);

/*
 * Inferred boundary only: the entry state is pointer-like.  Do not compile
 * this declaration until caller flow proves the complete parameter list and
 * the input-derived object layout.
 */
void FUN_08831174(FUN_08831174_State *state);
