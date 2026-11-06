/*
 * FUN_08831d98 recovery note.
 *
 * Purpose: retain the proven local packet-sized work area and direct helper
 * dependencies without claiming a whole C implementation.  The target has
 * six direct calls.  Only the pointer getter and byte-fill wrapper have
 * independently supported interfaces.  The packet snapshot, packet setup,
 * and packet submission helpers remain PARKED, so this is deliberately not
 * compiled as a whole candidate.
 */

typedef unsigned char u8;
typedef struct PacketWork20 {
    u8 bytes[20];
} PacketWork20;

extern void *FUN_0882fc38(void);
extern void *FUN_088ebb10(void *destination, int value, unsigned int size);

/*
 * Direct flow establishes a PacketWork20 local and a branch between the
 * snapshot and setup stages.  A private census scan found three direct call
 * sites, including two sites in the same larger packet routine.  The other
 * site is an already parked aggregate-transfer wrapper, whose retained review
 * also leaves this entry interface unresolved.  The missing helper and caller
 * contracts prevent a sound parameter list or return type for this entry
 * point.
 */
void FUN_08831d98(void);
