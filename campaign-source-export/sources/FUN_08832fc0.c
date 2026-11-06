/*
 * Purpose hypothesis: prepare selector 0x21 in a shared packet record, copy
 * that 20-byte record into a caller packet, append the third integer lane as
 * a four-byte packet field, submit it, and return the caller packet.  The
 * second lane is not semantically established.
 *
 * The registered address provider is genuinely void -> void *, but its
 * backing global is only declared as u16 in the current source.  The target's
 * twenty-byte copy therefore proves a span used by this wrapper, not a
 * Packet20 declaration.  Likewise, public call contexts consistently pass
 * destination, zero, and size to the clear forwarding wrapper, while that
 * wrapper's own registered declaration is parameterless.  Neither observation
 * establishes the parked helper prototypes needed for a compiled body.
 *
 * This uncompiled field view is not a whole C candidate.  The shared record
 * type and FUN_0882fc5c, FUN_0882ffb4, FUN_0882febc, and FUN_0883012c ABI
 * declarations are unresolved.
 */
typedef struct Packet20 Packet20;

extern void *FUN_0882fc38(void);
extern void FUN_088ebb10(void); /* Registered forwarding thunk; formal ABI unknown. */
extern void FUN_088301bc(unsigned char mode);

Packet20 *FUN_08832fc0(Packet20 *packet, void *unknown_second, int selector_value);
