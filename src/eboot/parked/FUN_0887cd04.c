/* Purpose: receive a peer packet, validate its sequence, and return the payload. */
extern unsigned char D_08aad3f4[];
extern unsigned char *D_08aad564;
extern int D_08aad560;
extern int D_08aad55c;
extern int FUN_0887ae64(int, void *, void *, void *, int);
extern int FUN_0880bff4(const void *, const void *, int);
extern void FUN_0880c088(void *, const void *, int);
extern unsigned int FUN_0887c4bc(int);

int FUN_0887cd04(int context, void *peer_out, unsigned short *kind_out,
                 void *payload_out, short capacity)
{
    unsigned char address[24];
    unsigned short kind[2];
    int i;
    for (;;) {
        int received = FUN_0887ae64(context, address, kind, D_08aad564, D_08aad560);
        D_08aad55c = received;
        if (received < 1)
            return received;
        for (i = 0; i < 15; i++) {
            unsigned char *peer = D_08aad3f4 + i * 0x18;
            if (*(short *)(peer + 0x14) != 0 && FUN_0880bff4(peer, address, 6) == 0) {
                int sequence;
                FUN_0880c088(&sequence, D_08aad564, 4);
                sequence = FUN_0887c4bc(sequence);
                if (sequence != 0) {
                    if (*(short *)(peer + 0x14) == 1) {
                        *(int *)(peer + 0x10) = sequence;
                        *(short *)(peer + 0x14) = 2;
                    } else if (*(short *)(peer + 0x14) != 2 ||
                               (unsigned int)sequence <= *(unsigned int *)(peer + 0x10)) {
                        break;
                    }
                }
                sequence = FUN_0887c4bc(sequence);
                if (sequence != 0) *(int *)(peer + 0x10) = sequence;
                FUN_0880c088(peer_out, peer, 6);
                *kind_out = kind[0];
                received -= 4;
                if (capacity < received) return -12;
                FUN_0880c088(payload_out, D_08aad564 + 4, received);
                return received;
            }
        }
    }
}
