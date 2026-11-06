/* Purpose: compute a capped probability score from traits and owned items. */
extern unsigned char *D_08aace80;
extern void *D_09bb7a80;
extern unsigned char D_089ca114[];
extern unsigned short D_089ca11c[];
extern signed char D_089ca128[];
extern void *FUN_088b51b8(void *, unsigned char, int);
extern int FUN_088a52b0(void *, int);
extern int FUN_088a52f8(void *, int);
extern unsigned int FUN_088a5644(void *, int);
extern int FUN_0886ea58(void *, unsigned short);
extern int FUN_0887e1fc(int, unsigned short);

int FUN_0887e2d0(int context, unsigned char *entry, int mode)
{
    void *player = FUN_088b51b8(D_09bb7a80, D_08aace80[0x26], 1);
    int score = 0;
    int i;
    if (player != 0) {
        unsigned char flags = entry[7];
        if (((flags & 2) && FUN_088a52b0(player, 0x43)) ||
            ((flags & 0x10) && FUN_088a52b0(player, 0x9e)) ||
            ((flags & 0x40) && FUN_088a52f8(player, 0x2a))) return 100;
        if ((flags & 0x20) && (FUN_088a52b0(player, 0xac) == 1 ||
            FUN_088a52f8(player, 0x2d) == 1 || FUN_088a52f8(player, 0x15) == 1)) return 100;
        if ((flags & 0x80) && FUN_088a52b0(player, 0xb8)) return 100;
        score = D_089ca128[(signed char)entry[4]];
        switch (FUN_088a5644(player, 0x36)) {
        case 0x83: score += 20; break;
        case 0x84: score += 45; break;
        case 0x85: score -= 10; break;
        case 0x86: score -= 20; break;
        }
        if (FUN_088a52f8(player, 0xc)) score += 20;
        if (FUN_088a52f8(player, 0xd)) score += 10;
    }
    for (i = 0; i < 5; i++) {
        int owned = FUN_0886ea58(D_08aace80, D_089ca11c[i]);
        if (mode == 1 && (*(unsigned int *)(D_08aace80 + 0x60474) & 1) != 0 &&
            FUN_0887e1fc(context, D_089ca11c[i]) != 0xffff)
            continue;
        if (owned == 0) break;
    }
    score += D_089ca114[i];
    return score < 101 ? score : 100;
}
