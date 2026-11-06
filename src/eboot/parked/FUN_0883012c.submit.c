/* Submit a game packet and return only submission errors. */
typedef struct AddressPrefix {
    unsigned int first;
    unsigned short last;
} AddressPrefix;

typedef struct PacketInput {
    unsigned short length;
    unsigned char reserved[2];
    unsigned char payload[17];
} PacketInput;

extern AddressPrefix D_08965380;
extern int D_08a29924;
extern void FUN_088ebb18(void *destination, const void *source, unsigned int size);
extern int FUN_0887cf30(int channel, const void *address, unsigned short kind,
                        const void *payload, short size, short copies);

int FUN_0883012c(const PacketInput *packet)
{
    AddressPrefix source = {D_08965380.first, D_08965380.last};
    unsigned char address[6];
    int result;

    FUN_088ebb18(address, &source, sizeof(address));
    result = FUN_0887cf30(D_08a29924, address, 10000, packet->payload,
                          (short)(packet->length + 20), packet->payload[16]);
    return result < 0 ? result : 0;
}
