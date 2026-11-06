/*
 * FUN_08838bdc: retain the supported packet-stage boundary without claiming a
 * whole C recovery.
 *
 * The only direct caller constructs two stack-local pointer lanes for this
 * entry.  Target flow obtains the shared 0x08a2993e pointer, clears exactly
 * 20 bytes, snapshots from the second incoming lane in mode one, prepares the
 * shared packet with selector 27, writes a big-endian field at +0xc, performs
 * the unresolved bounded-byte append, rewrites the header cursor at +8, and
 * submits the shared packet.  The first pointer lane's role, aggregate
 * ownership, unresolved append/setup declarations, and entry result contract
 * remain unproved.  Synthetic execution preserves the shared packet address
 * in the machine return lane, but that alone does not establish a public C
 * result type.  This is deliberately an uncompiled field/ABI view, not a
 * whole candidate.
 */

typedef unsigned int u32;

/* Confirmed only as a pointer-returning shared-state accessor. */
extern void *FUN_0882fc38(void);
/* Confirmed byte-fill thunk ABI; its returned pointer is not used here. */
extern void *FUN_088ebb10(void *destination, int value, u32 size);

/* The following incomplete declarations document target-flow boundaries only.
 * Do not compile this into a candidate until their independent interfaces and
 * the caller-owned aggregate layouts have been recovered. */
extern void FUN_088301bc(void);
extern void FUN_0882fc5c(void);
extern void FUN_0882fea4(void);
extern void FUN_0882fed4(void);
extern void FUN_0882febc(void);
extern void FUN_0883012c(void);

/* Supported sequence:
 *   shared = FUN_0882fc38();
 *   FUN_088ebb10(shared, 0, 20);
 *   FUN_088301bc(1, incoming_second_lane); FUN_0882fc5c(shared, 27);
 *   FUN_0882fea4(shared, 0); FUN_0882fed4(shared, 0);
 *   FUN_0882febc(shared); then FUN_0883012c(shared).
 */
