/*
 * Purpose: preserve the supported packet-submission call graph for
 * FUN_0883a0e0 while its incoming object layout and branch predicates are
 * recovered.  This is an intentionally uncompiled field/ABI view, not a
 * whole candidate.
 *
 * Evidence: the target makes six direct calls.  The returned global pointer
 * is passed through a byte-fill helper, then the sequence reaches snapshot,
 * packet preparation, header encoding, and packet submission helpers.
 * The packet helper prototypes below are only as strong as the independently
 * reviewed callee evidence; no unresolved callee type is asserted as exact.
 */
typedef unsigned char u8;
typedef unsigned int u32;

extern void *FUN_0882fc38(void);
extern void *FUN_088ebb10(void *destination, int value, u32 size);
extern int FUN_088301bc(int mode, const u8 *optional_six_byte_source);
extern void FUN_0882fc5c(void *packet_out); /* remaining arguments unresolved */
extern void FUN_0882febc(u8 *packet);
extern int FUN_0883012c(const void *packet);

/*
 * Confirmed relationship, not a callable reconstruction:
 *   packet flow includes reset/fill -> snapshot -> prepare -> encode -> submit.
 * Required next evidence: callers of this target must prove its input object,
 * the actual inter-call argument lanes, and each conditional predicate.
 */
