/*
 * Purpose: enqueue a channel level change with its reciprocal rate.
 * Channel 255 is the broadcast selector. Other channels use five bits.
 */
typedef struct {
    unsigned command;
    unsigned sequence;
    unsigned channel_word;
    unsigned rate;
    unsigned level_word;
} AudioLevelPacket;

extern AudioLevelPacket D_08965d28;
extern unsigned FUN_088599f0(unsigned command, void *packet, unsigned size);

unsigned FUN_0885a050(unsigned channel, int level, int rate)
{
    AudioLevelPacket packet;
    unsigned char *fields = (unsigned char *)&packet;

    packet.channel_word = D_08965d28.channel_word;
    packet.level_word = D_08965d28.level_word;
    packet.sequence = D_08965d28.sequence;
    packet.command = 0x1000000b;
    fields[8] = channel == 255 ? 255 : channel & 31;
    fields[16] = level & 127;
    packet.rate = (unsigned)rate;
    return FUN_088599f0(1, &packet, sizeof(packet));
}
