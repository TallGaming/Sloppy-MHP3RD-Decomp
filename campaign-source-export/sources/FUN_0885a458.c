/*
 * Purpose: enqueue the six-word audio request with the operation header.
 * The caller's aligned six-word record is copied into the local packet.
 */
typedef struct {
    unsigned words[6];
} AudioRequest;

typedef struct {
    unsigned operation;
    unsigned sequence;
    AudioRequest body;
} AudioPacket;

extern unsigned D_08965d90;
extern unsigned FUN_088599f0(unsigned selector, void *packet, unsigned size);

unsigned FUN_0885a458(const AudioRequest *request)
{
    AudioPacket packet;

    packet.operation = 0x10000007;
    packet.sequence = D_08965d90;
    packet.body = *request;
    return FUN_088599f0(1, &packet, sizeof(packet));
}
