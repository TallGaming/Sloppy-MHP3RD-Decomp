/*
 * Purpose: validate a seven-word audio request and enqueue it for operations
 * 0x10000001 through 0x10000003.
 */
typedef struct {
    unsigned words[7];
} AudioBody;

typedef struct {
    unsigned operation;
    unsigned sequence;
    AudioBody body;
} AudioPacket;

extern AudioPacket D_08965dd0;
extern signed char D_09bc1ed0;
extern const char D_08965f0c[], D_08965f14[], D_08965f7c[];
extern int FUN_0880d4b4(const char *, ...);
extern int FUN_0880d590(const char *);
extern int FUN_0885a4cc(AudioBody *body);
extern unsigned FUN_088599f0(unsigned kind, void *packet, unsigned size);

unsigned FUN_0885a7ec(const AudioBody *body, unsigned operation)
{
    AudioPacket packet;

    if (operation < 0x10000001u || operation > 0x10000003u) {
        if (D_09bc1ed0) {
            FUN_0880d4b4(D_08965f0c);
            if (D_09bc1ed0) {
                FUN_0880d4b4(D_08965f14);
                if (D_09bc1ed0)
                    FUN_0880d590(D_08965f7c);
            }
        }
        return 0;
    }

    packet = D_08965dd0;
    packet.operation = operation;
    packet.body = *body;
    if (FUN_0885a4cc(&packet.body) < 0)
        return 0;
    return FUN_088599f0(1, &packet, sizeof(packet));
}
