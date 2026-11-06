/*
 * FUN_088327c0: unresolved packet-construction and submission coordinator.
 *
 * Its real direct dependency order obtains D_08a2993e's address, clears a
 * 20-byte region through the typed byte-fill thunk, snapshots packet mode 1,
 * performs four packet-helper stages, and invokes the established packet
 * submission helper FUN_0883012c.  The target's sole current direct caller
 * supplies a stack-relative pointer in a0 but is otherwise unclassified;
 * four packet-stage helper interfaces are still PARKED.
 * The target has no absolute data access of its own in the reviewed interval,
 * which supports keeping packet storage ownership with the caller context.
 * This is therefore an uncompiled field/dependency view, not a candidate.
 */

typedef unsigned char u8;

extern void *FUN_0882fc38(void);
extern void *FUN_088ebb10(void *destination, int value, unsigned int size);
extern void FUN_088301bc(unsigned char mode);
extern int FUN_0883012c(const void *packet); /* PacketInput layout remains external. */

/* Unresolved direct packet stages: FUN_0882fc5c, FUN_0882ffb4,
 * FUN_0882fed4, and FUN_0882febc.  Their interfaces and the entry ABI must
 * be recovered before retaining a whole function body. */
