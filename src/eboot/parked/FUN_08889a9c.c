/* Purpose: validate three peer slots, fill empty slots, and return a fill mask. */
extern void FUN_088ebb10(void *, int, unsigned int);
extern int FUN_0880bff4(const void *, const void *, unsigned int);
extern int FUN_088896fc(void *, const void *);

static unsigned char *find_peer(unsigned char *object,
                                const unsigned char *identifier)
{
    int count = *(signed char *)(object + 0x17af);
    int i;
    for (i = 0; i < count; i++) {
        unsigned char *peer = object + 0x818 + i * 0x14c;
        if (FUN_0880bff4(identifier, peer, 6) == 0)
            return peer;
    }
    return 0;
}

static int slot_empty(const unsigned char *slot)
{
    return (slot[0] | slot[1] | slot[2] | slot[3] | slot[4] | slot[5]) == 0;
}

int FUN_08889a9c(unsigned char *object, unsigned char *slots)
{
    int mode = object[0x1bcd];
    int count = *(signed char *)(object + 0x17af);
    int mask = 0;
    int i;
    int j;

    if (mode < 2 || mode > 5) {
        for (i = 0; i < 3; i++)
            FUN_088ebb10(slots + 8 + i * 8, 0, 8);
        return 0;
    }

    for (i = 0; i < 3; i++) {
        unsigned char *slot = slots + 8 + i * 8;
        unsigned char *peer = find_peer(object, slot);
        if (peer == 0 || peer[0x143] < 2 || peer[0x143] > 5 ||
            (peer[0x143] == 5 && FUN_088896fc(object, peer) == 0))
            FUN_088ebb10(slot, 0, 8);
    }

    for (i = 0; i < count; i++) {
        unsigned char *peer = object + 0x818 + i * 0x14c;
        int peer_mode = peer[0x143];
        if (peer_mode < 2 || peer_mode > 5 || peer_mode == 5)
            continue;
        for (j = 0; j < 4; j++) {
            unsigned char *slot = slots + j * 8;
            if (slot_empty(slot)) {
                *(unsigned int *)slot = *(unsigned int *)(peer + 8);
                *(unsigned int *)(slot + 4) = *(unsigned int *)(peer + 12);
                mask |= 1 << j;
                break;
            }
            if (FUN_0880bff4(slot, peer, 6) == 0)
                break;
        }
    }
    return mask & 0xff;
}
