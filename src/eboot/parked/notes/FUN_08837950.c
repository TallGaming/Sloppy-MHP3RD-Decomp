/*
 * Purpose hypothesis: prepare and submit a shared packet, then conditionally
 * append record fields through the packet cursor helpers.
 *
 * This is an uncompiled field/ABI view, not a whole-function candidate. The
 * target has no direct JAL callers in the current function census, and its
 * observable call flow retains a live callee-saved register at several packet
 * helper calls. Therefore neither the incoming callable ABI nor the packet
 * context owner is established.
 */

typedef unsigned char u8;

/* Known target-level relationships from the retained semantic call-flow view. */
extern void *FUN_0882fc38(void);
extern void FUN_0882fea4(u8 *packet, unsigned short value);
extern void FUN_0882febc(u8 *packet);

/*
 * The target obtains the shared packet address, invokes packet preparation,
 * writes the two header fields through the typed helpers above, submits it,
 * and then uses packet append helpers. The six-byte snapshot, packet
 * initializer, submit, append, and dispatch dependency ABIs are still
 * incomplete or parked, so a callable C body would invent semantics.
 */
