/* Purpose: update a timed fade and emit its full-screen overlay commands. */
extern unsigned char *D_08abceb8;
extern unsigned char *D_08abce80;
extern void *D_09bfe670;
extern int FUN_0886cac8(void *);
extern void FUN_08861ee0_emit_overlay(void *, unsigned int, void *);
extern void FUN_089239f0(void *);

static unsigned char interpolate_channel(unsigned char start,
                                         unsigned char end,
                                         short frame, short duration)
{
    float ratio = (float)frame / (float)duration;
    float value = (float)start + ((float)end - (float)start) * ratio;

    while (value >= 256.0f)
        value -= 256.0f;
    return (unsigned char)(int)value;
}

void FUN_08861ee0(unsigned char *fade)
{
    int phase = *(int *)(fade + 0x18);
    unsigned int color;

    if (phase == 1 || phase == 2) {
        if (FUN_0886cac8(D_08abce80))
            (*(short *)(fade + 0x22))++;
        if (phase == 1)
            fade[0x2b] = interpolate_channel(fade[0x26], fade[0x25],
                                             *(short *)(fade + 0x22),
                                             *(short *)(fade + 0x20));
        else
            fade[0x2b] = interpolate_channel(fade[0x25], fade[0x26],
                                             *(short *)(fade + 0x22),
                                             *(short *)(fade + 0x20));
    } else if (phase == 3) {
        (*(short *)(fade + 0x22))++;
        fade[0x2b] = interpolate_channel(fade[0x25], fade[0x26],
                                         *(short *)(fade + 0x22),
                                         *(short *)(fade + 0x20));
    }

    if (*(short *)(fade + 0x22) >= *(short *)(fade + 0x20)) {
        if (fade[0x2b] == 0) {
            *(int *)(fade + 0x18) = 0;
            FUN_089239f0(D_09bfe670);
            return;
        }
        *(int *)(fade + 0x18) = 4;
    }

    color = (unsigned int)fade[0x28] |
            ((unsigned int)fade[0x29] << 8) |
            ((unsigned int)fade[0x2a] << 16) |
            ((unsigned int)fade[0x2b] << 24);
    FUN_08861ee0_emit_overlay(D_08abceb8, color,
                              *(void **)(fade + 0x1c));
    FUN_089239f0(D_09bfe670);
}
