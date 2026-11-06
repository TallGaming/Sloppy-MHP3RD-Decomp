/*
 * FUN_08836d94: assemble a shared packet from three caller records, submit
 * it, and return its fixed-size snapshot through output storage.
 *
 * Partial ABI view. The three record append helpers have verified registered
 * interfaces. The packet setup and submission helpers remain parked, and no
 * static direct caller establishes the formal object contract.
 */
typedef unsigned char u8;
typedef unsigned int u32;

typedef struct Packet20 {
    u8 bytes[20];
} Packet20;

extern void *FUN_0882fc38(void);
extern void FUN_088ebb10();
extern void FUN_088301bc();
extern void FUN_0882fc5c();
extern int FUN_08830270(void *out, const void *src);
extern int FUN_088302c4(void *out, const u8 *src);
extern int FUN_08830318(void *out, const u8 *src);
extern void FUN_0882febc();
extern void FUN_0883012c();

void *FUN_08836d94(void *output, const void *record8,
                   const u8 *record_at_1a, const u8 *record_at_11c)
{
    Packet20 *packet = FUN_0882fc38();

    if (packet != 0) {
        FUN_088ebb10(packet, 0, sizeof(*packet));
        FUN_088301bc(0, 0);
        FUN_0882fc5c(packet, 24);
        FUN_08830270(packet, record8);
        FUN_088302c4(packet, record_at_1a);
        FUN_08830318(packet, record_at_11c);
        FUN_0882febc(packet);
        FUN_0883012c(packet);
        *(Packet20 *)output = *packet;
    }
    return output;
}
