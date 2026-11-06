/*
 * Purpose: build the mode-0x100 audio request for the selected channel,
 * apply the supplied settings, and submit operation 0x10000003.
 */
typedef struct {
    unsigned short mode;
    unsigned short flags;
    unsigned words[5];
} AudioBodyPrefix;

typedef struct {
    AudioBodyPrefix prefix;
    unsigned channel;
} AudioBody;

typedef struct AudioSettings AudioSettings;

extern AudioBodyPrefix D_08965e10;
extern void FUN_0885a338(AudioBody *body, const AudioSettings *settings);
extern unsigned FUN_0885a7ec(const AudioBody *body, unsigned operation);

unsigned FUN_0885aa60(unsigned channel, const AudioSettings *settings)
{
    AudioBody body;

    body.prefix = D_08965e10;
    body.channel = channel;
    body.prefix.mode = 0x100;
    FUN_0885a338(&body, settings);
    return FUN_0885a7ec(&body, 0x10000003);
}
