/*
 * Purpose hypothesis: clear a caller packet, copy a shared 20-byte record
 * into it, update and submit that shared record, and report successful
 * submission through an unresolved kind-two dispatcher.  The function returns
 * its caller-supplied packet.
 *
 * This is an uncompiled field/ABI view.  The shared record's true type and
 * the interfaces for FUN_0882fc5c, FUN_0882febc, FUN_0883012c, and the final
 * dispatcher are not yet established; inventing them would not be a natural
 * whole-function candidate.
 */
typedef unsigned int u32;

typedef struct Packet20 Packet20;

extern void *FUN_0882fc38(void);
extern void *FUN_088ebb10(void *destination, int value, u32 size);
extern void FUN_088301bc(unsigned char mode);

/* FUN_0882fc5c receives the shared record and a 0x20 immediate lane. */
/* FUN_0882fea4 writes a 16-bit field in that record. */
/* FUN_0882febc derives a second 16-bit field from the same record. */
/* FUN_0883012c returns a status tested before the final kind-two dispatch. */

Packet20 *FUN_08832d18(Packet20 *packet, void *context);
