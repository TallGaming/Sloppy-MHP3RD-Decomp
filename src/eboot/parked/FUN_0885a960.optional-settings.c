/*
 * Purpose: apply four optional byte settings to the audio request template
 * and submit operation 0x10000003. A full-word -1 leaves the field unchanged.
 */
typedef struct {
    unsigned short mode;
    unsigned char reserved_02[2];
    unsigned char first;
    unsigned char reserved_05;
    unsigned char second;
    unsigned char third;
    unsigned reserved_08[2];
    unsigned char reserved_10[2];
    unsigned char fourth;
    unsigned char reserved_13;
    unsigned reserved_14[2];
} AudioBody;

typedef struct AudioSettings AudioSettings;
extern AudioBody D_08965df4;
extern void FUN_0885a338(AudioBody *body, const AudioSettings *settings);
extern unsigned FUN_0885a7ec(const AudioBody *body, unsigned operation);

unsigned FUN_0885a960(int first, int second, int third, int fourth,
                      const AudioSettings *settings)
{
    AudioBody body = D_08965df4;

    if (first == -1) {
        body.mode |= 2;
    } else {
        body.first = first;
        body.mode |= 4;
    }
    if (second != -1) {
        body.mode |= 0x20;
        body.second = second;
    }
    if (third != -1) {
        body.mode |= 0x40;
        body.third = third;
    }
    if (fourth != -1) {
        body.mode |= 0x80;
        body.fourth = fourth;
    }
    FUN_0885a338(&body, settings);
    return FUN_0885a7ec(&body, 0x10000003);
}

