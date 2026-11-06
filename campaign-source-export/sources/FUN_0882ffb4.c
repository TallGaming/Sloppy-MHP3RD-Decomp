/* Append a big-endian word to the packet if it has room. */
typedef struct PacketCursor {
    unsigned short total;
    unsigned short offset;
    unsigned char header[20];
    unsigned char payload[];
} PacketCursor;

extern unsigned int D_08a291a4;

void FUN_0882ffb4(PacketCursor *cursor, unsigned int value)
{
    if (cursor->total + 4 >= 1404) {
        D_08a291a4 = 0x8008;
    } else {
        unsigned char *field = cursor->payload + cursor->offset;
        field[0] = (unsigned char)(value >> 24);
        field[1] = (unsigned char)(value >> 16);
        field[2] = (unsigned char)(value >> 8);
        field[3] = (unsigned char)value;
        cursor->offset += 4;
        cursor->total += 4;
    }
}
