/* Purpose: serialize and submit one of several command-specific network packets. */
extern void FUN_088ebb18(void *, const void *, unsigned int);
extern void FUN_088ebb10(void *, int, unsigned int);
extern void FUN_0882ddb8(void *);
extern void FUN_0882de24(const void *, const void *, int, int);
extern void FUN_088854e8(void *, const void *, unsigned int);

typedef struct PacketArgument {
    const void *data;
    unsigned int size;
    unsigned int extra;
} PacketArgument;

void FUN_08885608(void *context, const unsigned char *recipient,
                  unsigned int command, const PacketArgument *argument)
{
    unsigned char packet[944];
    unsigned int size = 12;

    if ((*(unsigned int *)((unsigned char *)context + 0x1bcd) & 0xff) < 2)
        return;
    if (command >= 21)
        return;

    FUN_088ebb10(packet, 0, sizeof(packet));
    *(unsigned int *)packet = command;

    switch (command) {
    case 0:
        size = 13;
        break;
    case 1:
        size = 14;
        if (argument)
            FUN_088ebb18(packet + 12, argument->data, 2);
        break;
    case 2:
        size = 16;
        if (argument)
            *(unsigned int *)(packet + 12) = argument->extra;
        break;
    case 3:
        size = 20;
        if (argument)
            FUN_088ebb18(packet + 12, argument->data, 8);
        break;
    case 4:
        size = 24;
        if (argument)
            FUN_088ebb18(packet + 12, argument->data, 12);
        break;
    case 5:
        size = 28;
        if (argument)
            FUN_088ebb18(packet + 12, argument->data, 16);
        break;
    case 6:
    case 7:
        size = 204;
        if (argument)
            FUN_088ebb18(packet + 12, argument->data, 192);
        break;
    case 8:
    case 9:
        size = 764;
        if (argument) {
            *(unsigned int *)(packet + 12) = argument->extra;
            FUN_088ebb18(packet + 28, argument->data, argument->size);
        }
        break;
    default:
        size = 17;
        if (argument && argument->data)
            FUN_088854e8(context, argument->data, argument->size);
        break;
    }

    if (recipient) {
        FUN_088ebb18(packet + 4, recipient, 6);
        *(unsigned short *)(packet + 768) = (unsigned short)size;
        FUN_0882de24(recipient, packet, 0, 0);
    } else {
        unsigned int i;
        for (i = 0; i < 6; i++)
            packet[4 + i] = 0xff;
        FUN_0882ddb8(packet);
    }
}
