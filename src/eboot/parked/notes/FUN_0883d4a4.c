/*
 * Purpose: retain the verified outer interface and dependency constraints for
 * FUN_0883d4a4 without presenting an ABI-incomplete body as a candidate.
 *
 * Three byte-matched tail callers independently establish this void function's
 * (record, value, mode) interface.  The target calls the registered slot-zero
 * wrapper and then the ABI-incomplete descriptor dispatcher.  The descriptor
 * dispatcher's parked declaration is evidence only, so its declaration below
 * is intentionally not used to reconstruct a function body.
 */

typedef signed int s32;
typedef unsigned short u16;

void FUN_0883d4a4(void *record, s32 value, s32 mode);

/* Verified registered interface. */
extern void FUN_08867d40(void *record, u16 value);

/* PARKED interface hypothesis: return and complete stack-lane ABI are open. */
extern void FUN_08904570(void);

/*
 * Local decode shows a call to FUN_08867d40 followed by a call to
 * FUN_08904570.  It also confirms stack-lane preparation before the second
 * call.  Caller-return flow and the descriptor dispatcher's complete ABI are
 * required before a natural whole-C implementation is justified.
 */
