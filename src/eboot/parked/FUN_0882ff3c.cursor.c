/* Append the big-endian packet size if the packet has room. */
typedef struct PacketCursor {
    unsigned short total;
    unsigned short offset;
    unsigned char header[20];
    unsigned char payload[];
} PacketCursor;

extern unsigned int D_08a291a4;

void FUN_0882ff3c(PacketCursor *cursor, unsigned short size)
{
    if (cursor->total + 2 >= 1404) {
        D_08a291a4 = 0x8008;
    } else {
        unsigned char *field = cursor->payload + cursor->offset;
        field[0] = (unsigned char)(size >> 8);
        field[1] = (unsigned char)size;
        cursor->offset += 2;
        cursor->total += 2;
    }
}
