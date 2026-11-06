/* Purpose: validate and dispatch an incoming command packet to game/network state. */
extern unsigned char *D_08abce80;
extern void FUN_0882ddc0(void *);
extern unsigned char *FUN_08885024(void *);
extern int FUN_0880bff4(const void *, const void *, unsigned int);
extern void FUN_08885608(void *, const unsigned char *, unsigned int,
                         const void *);
extern void FUN_088ebb10(void *, int, unsigned int);
extern void FUN_088ebb18(void *, const void *, unsigned int);
extern void FUN_088885d8(void *);
extern void FUN_08888824(void *);

typedef struct IncomingCommand {
    void *transport;
    void *source;
    void *owner;
    void *context;
    unsigned int flags;
} IncomingCommand;

static void apply_small_update(unsigned char *context, unsigned int command,
                               const unsigned char *payload)
{
    switch (command) {
    case 0:
        context[0x1bcd] = payload[0];
        break;
    case 1:
        FUN_088ebb18(context + 0x818, payload, 16);
        break;
    case 2:
        FUN_088ebb18(context + 0xd48, payload, 16);
        break;
    case 3:
        *(unsigned int *)(context + 0x24f0) = *(const unsigned int *)payload;
        break;
    case 4:
        FUN_088885d8(context);
        FUN_08888824(context);
        break;
    default:
        break;
    }
}

void FUN_08889eb8(const IncomingCommand *incoming)
{
    unsigned char workspace[1312];
    unsigned char *packet = workspace + 512;
    unsigned char *sender;
    unsigned int command;

    if (incoming == 0 || incoming->context == 0)
        return;

    FUN_0882ddc0(workspace + 472);
    sender = FUN_08885024(incoming->context);
    if (FUN_0880bff4(packet + 4, sender, 6) != 0)
        return;

    command = *(unsigned int *)packet;
    if (command >= 21)
        return;

    apply_small_update(incoming->context, command, packet + 12);

    switch (command) {
    case 5:
    case 6:
    case 7:
        FUN_08885608(incoming->context, packet + 4, command, packet + 12);
        break;
    case 8:
    case 9:
        FUN_088ebb18(incoming->context + 0x590d8, packet + 20, 8);
        break;
    case 10:
        FUN_088ebb10(incoming->context + 0x5d4a0, 0, 68);
        break;
    case 11:
    case 12:
        FUN_088885d8(incoming->context);
        FUN_08888824(incoming->context);
        break;
    default:
        break;
    }
}
