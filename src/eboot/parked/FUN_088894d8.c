/* Purpose: test whether a selected peer is linked to the current local peer. */
extern unsigned char *FUN_08885024(void);
extern int FUN_0880bff4(const void *, const void *, unsigned int);

int FUN_088894d8(unsigned char *object, unsigned char selected)
{
    const unsigned char *local_identifier = FUN_08885024();
    unsigned char *local_peer = 0;
    unsigned char *linked_peer = 0;
    int count = *(signed char *)(object + 0x17af);
    int i;

    for (i = 0; i < count; i++) {
        unsigned char *peer = object + 0x818 + i * 0x14c;
        if (FUN_0880bff4(local_identifier, peer, 6) == 0) {
            local_peer = peer;
            break;
        }
    }
    if (local_peer != 0) {
        for (i = 0; i < count; i++) {
            unsigned char *peer = object + 0x818 + i * 0x14c;
            if (FUN_0880bff4(peer + 0x13c, local_peer, 6) == 0) {
                linked_peer = peer;
                break;
            }
        }
    }

    if ((object[0x1bcd] == 3 || object[0x1bcd] == 4 ||
         object[0x1bcd] == 5) && linked_peer != 0) {
        unsigned char *chosen = object + selected * 0x14c;
        unsigned char state = chosen[0x95b];
        if (state == 3 || state == 4 || state == 5)
            return FUN_0880bff4(linked_peer, chosen + 0x954, 6) == 0;
    }
    return 0;
}
