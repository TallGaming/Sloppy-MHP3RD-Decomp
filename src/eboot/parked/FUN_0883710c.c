/*
 * FUN_0883710c: prepare a shared fixed-size packet with one fixed record,
 * submit it, and copy its snapshot to caller output storage.
 *
 * Partial ABI view. Two direct callers both provide derived output storage
 * and a loaded record argument. Packet setup and submit helper interfaces
 * remain parked and prevent a whole-candidate claim.
 */
typedef unsigned char u8;

typedef struct Packet20 {
    u8 bytes[20];
} Packet20;

extern void *FUN_0882fc38(void);
extern void FUN_088ebb10();
extern void FUN_088301bc();
extern void FUN_0882fc5c();
extern int FUN_08830270(void *out, const void *src);
extern void FUN_0882febc();
extern void FUN_0883012c();

void *FUN_0883710c(void *output, const void *record8)
{
    Packet20 *packet = FUN_0882fc38();

    if (packet != 0) {
        FUN_088ebb10(packet, 0, sizeof(*packet));
        FUN_088301bc(0, 0);
        FUN_0882fc5c(packet, 25);
        FUN_08830270(packet, record8);
        FUN_0882febc(packet);
        FUN_0883012c(packet);
        *(Packet20 *)output = *packet;
    }
    return output;
}
