/* Collect valid packet keys into consecutive shared event slots. */
typedef struct PacketKey {
    unsigned int first;
    unsigned int second;
    unsigned char reserved[0x144];
} __attribute__((packed)) PacketKey;

typedef struct EventKey {
    unsigned int first;
    unsigned int second;
    unsigned char reserved[0xa0];
} EventKey;

extern PacketKey D_08a29258[4];
extern unsigned char *D_09bf5250;
extern int FUN_08830550(const signed char *values);

void FUN_0883ac8c(void)
{
    int input;
    int output = 0;

    for (input = 0; input < 4; ++input) {
        const PacketKey *key = &D_08a29258[input];
        if (FUN_08830550((const signed char *)key)) {
            EventKey *slots = (EventKey *)(D_09bf5250 + 0x34988);
            EventKey *slot = &slots[output++];
            slot->second = key->second;
            slot->first = key->first;
        }
    }
}
