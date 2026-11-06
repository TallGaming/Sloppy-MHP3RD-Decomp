/*
 * Purpose: retain the supported global packet-builder shape of FUN_0882e2c0.
 *
 * This is intentionally an uncompiled diagnostic partial, not a whole
 * candidate.  The target is a .data callback-table entry with no direct jal
 * callers.  It does not consume incoming registers: the initial accessor
 * independently returns a global-state-relative pointer.  The packet-state
 * base and the concrete source/packet types remain unresolved.
 */
typedef unsigned char u8;

extern u8 *FUN_0882fc48(void);
extern void FUN_088ebb10(void *destination, int value, unsigned byte_count);
extern void FUN_0882e484(void);
extern u8 *FUN_0883040c(void *packet, const u8 *source);
extern u8 *FUN_088303f0(void *destination, const u8 *source);
extern u8 *FUN_08830378(void *destination, unsigned capacity,
                         const u8 *source);

extern u8 *D_PACKET_STATE_BASE; /* Global binding is not yet typed. */

void FUN_0882e2c0(void)
{
    u8 *source = FUN_0882fc48();
    u8 *encoded;

    /* Imported FUN_088ebb10 receives destination, zero, and 812. */
    FUN_088ebb10(D_PACKET_STATE_BASE + 9564, 0, 812);
    FUN_0882e484();
    encoded = FUN_0883040c(D_PACKET_STATE_BASE + 9572, source);
    (void)FUN_088303f0(D_PACKET_STATE_BASE + 10372, encoded);
    (void)FUN_08830378(D_PACKET_STATE_BASE + 9604, 768, encoded);
}
