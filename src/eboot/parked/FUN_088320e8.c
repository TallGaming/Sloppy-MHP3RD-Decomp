/*
 * FUN_088320e8 recovery note.
 *
 * Purpose: retain a packet-construction field view without claiming a whole
 * C implementation.  The target transfers a 20-byte aggregate and makes
 * seven direct calls.  The verified pointer getter, byte-fill thunk, and
 * packet size/copy helper show that a constructed object enters the packet
 * cursor path; that object is not yet bound to a complete layout.
 *
 * The upstream chain begins with two peer-record refresh sites and then a
 * peer-record dispatcher.  That dispatcher conditionally passes a stack-local
 * aggregate, but its input layout and the aggregate ownership are unresolved.
 * The snapshot, setup, and final submission dependencies have no
 * independently supported public interfaces.
 * This partial is intentionally not compiled as a whole candidate.
 */

typedef unsigned char u8;
typedef struct PacketAggregate20 {
    u8 bytes[20];
} PacketAggregate20;

extern void *FUN_0882fc38(void);
extern void *FUN_088ebb10(void *destination, int value, unsigned int size);
extern int FUN_08830318(void *cursor, const u8 *source);

/* Entry ABI and result contract remain unproved. */
void FUN_088320e8(void);
