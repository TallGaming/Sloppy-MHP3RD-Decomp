/*
 * FUN_08836410: prepare a shared fixed-size packet, submit it, and copy it
 * to the caller-provided output storage.
 *
 * Partial ABI view. The shared-buffer accessor is registered C, but the
 * packet helper signatures remain unverified parked hypotheses. This source
 * preserves the target-local control flow and argument flow for review; it
 * is not a whole matching candidate.
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
extern void FUN_0882ffb4();
extern void FUN_0882febc();
extern void FUN_0883012c();

void *FUN_08836410(void *output, const void *snapshot_record, u32 packet_value)
{
    Packet20 *packet = FUN_0882fc38();

    if (packet != 0) {
        FUN_088ebb10(packet, 0, sizeof(*packet));
        FUN_088301bc(1, snapshot_record);
        FUN_0882fc5c(packet, 18);
        FUN_0882ffb4(packet, packet_value);
        FUN_0882febc(packet);
        FUN_0883012c(packet);
        *(Packet20 *)output = *packet;
    }
    return output;
}
