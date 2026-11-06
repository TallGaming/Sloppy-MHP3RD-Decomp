/* Purpose: append one length-prefixed packet to either the caller-selected
 * sibling buffer or the shared input buffer selected by packet route byte 1.
 * On capacity failure, record local error code 2 and the required byte count.
 */
typedef unsigned char u8;

typedef struct ByteBuffer {
    int used;
    int capacity;
    u8 *data;
} ByteBuffer;

typedef struct PacketPrefix {
    u8 length;
    u8 route;
} PacketPrefix;

extern ByteBuffer D_08a20ff0;
extern int FUN_08826e3c(void *owner, int code, int required);
extern void *FUN_088ebb18(void *destination, const void *source, int count);

int FUN_08827824(void *owner, ByteBuffer *destination, const PacketPrefix *packet) {
    int packet_length;
    int required;

    if (packet->route != 1) {
        packet_length = packet->length;
        required = destination->used;
        required += packet_length;
        if (destination->capacity < required) {
            return FUN_08826e3c(owner, 2, required);
        }
        FUN_088ebb18(destination->data + destination->used, packet,
                     packet_length);
        destination->used += packet->length;
        return packet->length;
    }

    packet_length = packet->length;
    required = D_08a20ff0.used;
    required += packet_length;
    if (D_08a20ff0.capacity < required) {
        return FUN_08826e3c(owner, 2, required);
    }
    FUN_088ebb18(D_08a20ff0.data + D_08a20ff0.used, packet, packet_length);
    D_08a20ff0.used += packet->length;
    return packet->length;
}
