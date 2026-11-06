/* Append a packet payload if it fits; flag an overfull packet otherwise. */
typedef struct PacketCursor {
    unsigned short total;
    unsigned short offset;
    unsigned char header[20];
    unsigned char payload[];
} PacketCursor;

extern unsigned int D_08a291a4;
extern void FUN_088ebb18(void *destination, const void *source, unsigned int size);

void FUN_08830038(PacketCursor *cursor, const void *source, unsigned int size)
{
    if (cursor->total + size >= 1404) {
        D_08a291a4 = 0x8008;
    } else {
        FUN_088ebb18(cursor->payload + cursor->offset, source, size);
        cursor->offset += size;
        cursor->total += size;
    }
}
