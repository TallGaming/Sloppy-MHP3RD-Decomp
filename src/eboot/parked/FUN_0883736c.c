/*
 * Purpose: retain the target's packet-submit dataflow without claiming a
 * complete callable ABI or an exact candidate.
 *
 * Direct caller views show a0 is caller stack storage. Target flow clears
 * twenty bytes there, prepares a shared packet, adds the low byte of a1,
 * submits it, and has one result-controlled path around a five-word copy.
 * The packet-initializer's remaining arguments and the shared record binding
 * are still not proved. This file is intentionally uncompiled.
 */
typedef unsigned char u8;
typedef unsigned int u32;

typedef struct Packet20 {
    u8 bytes[20];
} Packet20;

extern Packet20 *FUN_0882fc38(void);
extern void FUN_088ebb10(void *destination, int value, u32 size);
extern void FUN_088301bc(u8 use_external, const void *record);
extern void FUN_0882fc5c(void); /* Its full ABI is PARKED. */
extern int FUN_08830270(void *out, const void *source);
extern u32 FUN_0882fed4(void *header, u32 value);
extern void FUN_0882febc(u8 *packet);
extern int FUN_0883012c(const Packet20 *packet);

int FUN_0883736c_partial(Packet20 *output, u32 selector)
{
    Packet20 *packet;
    int result;

    FUN_088ebb10(output, 0, sizeof(*output));
    FUN_088301bc(0, 0);
    packet = FUN_0882fc38();

    /* Target supplies two unresolved initializer inputs here. */
    FUN_0882fc5c();
    FUN_08830270(packet, 0); /* Shared-record source needs a symbol binding. */
    FUN_0882fed4(packet, (u8)selector);
    FUN_0882febc(packet->bytes);
    result = FUN_0883012c(packet);
    if (result != 0) {
        return result;
    }

    *output = *packet;
    return result;
}
