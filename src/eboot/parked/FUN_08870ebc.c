/* Purpose: sanitize packed options, item identifiers, and skill lists. */
extern unsigned short D_089c7230[];
extern unsigned short D_089c7238[];
extern unsigned char D_089fd5a0[];
extern void *D_08a3919c;
extern unsigned char *D_08abce80;
extern int FUN_0885ca20(void *);
extern int FUN_0882dd6c(void *, const unsigned short *);
extern int FUN_0886ae7c(void *, const unsigned short *, int);

static int item_valid(unsigned short item)
{
    if (item < 979)
        return 1;
    return FUN_0885ca20(D_08a3919c) == 0;
}

static void sanitize_three_items(unsigned short *items)
{
    int i;
    for (i = 0; i < 3; i++)
        if (!item_valid(items[i])) items[i] = 0;
}

void FUN_08870ebc(void *unused, unsigned char *config)
{
    unsigned int packed = *(unsigned int *)config;
    unsigned short *skills = (unsigned short *)(config + 0x7e);
    int i;
    int present = 0;
    int score = 0;

    (void)unused;
    if (((packed >> 3) & 0x1f) >= 20) packed &= ~(0x1fU << 3);
    if (((packed >> 8) & 0x0f) >= 11) packed &= ~(0x0fU << 8);
    if (((packed >> 12) & 0x0f) >= 14) packed &= ~(0x0fU << 12);
    if (((packed >> 16) & 7) >= 7) packed &= ~(7U << 16);
    if (config[3] >= 6) packed &= 0x00ffffff;
    *(unsigned int *)config = packed;

    for (i = 0; i < 5; i++) {
        unsigned char *entry = config + i * 10;
        if (*(unsigned short *)(entry + 20) >= D_089c7238[i])
            *(unsigned short *)(entry + 20) = 0;
        sanitize_three_items((unsigned short *)(entry + 24));
    }

    if (config[0x6e] < 5 || config[0x6e] >= 18)
        config[0x6e] = 5;
    if (*(unsigned short *)(config + 0x46) >= D_089c7238[config[0x6e]])
        *(unsigned short *)(config + 0x46) = 0;
    sanitize_three_items((unsigned short *)(config + 0x4a));
    if (config[0x6f] != 101 && config[0x6f] != 0xff)
        config[0x6f] = 0xff;

    packed = *(unsigned int *)(config + 0x50);
    if ((packed & 0x0f) >= 7) packed &= ~0x0fU;
    if (((packed >> 4) & 0x3f) >= 61)
        packed = (packed & ~(0x3fU << 4)) | (30U << 4);
    if (((packed >> 10) & 0x3f) >= 61)
        packed = (packed & ~(0x3fU << 10)) | (30U << 10);
    if (((packed >> 16) & 0x7f) >= 101) packed &= ~(0x7fU << 16);
    if (((packed >> 23) & 0x7f) >= 101) packed &= ~(0x7fU << 23);
    *(unsigned int *)(config + 0x50) = packed;
    sanitize_three_items((unsigned short *)(config + 0x54));

    for (i = 0; i < 5; i++) {
        unsigned int *entry = (unsigned int *)(config + 0x58 + i * 4);
        if (((*entry >> 18) & 0x0f) >= 12) *entry &= ~(0x0fU << 18);
        if (config[0x79 + i] >= 70) config[0x79 + i] = 0;
    }

    if (((skills[0] >> 6) & 1) + ((skills[0] >> 7) & 1) +
        ((skills[0] >> 8) & 1) >= 2)
        skills[0] &= ~(7U << 6);
    if (config[0x80] + config[0x81] >= 151)
        config[0x80] = config[0x81] = 0;
    for (i = 0; i < 6; i++) {
        signed char first = (signed char)config[0x82 + i];
        signed char second = (signed char)config[0x88 + i];
        if ((unsigned char)(first + 1) >= 53) config[0x82 + i] = 0xff;
        if ((unsigned char)(second + 1) >= 53) config[0x88 + i] = 0xff;
        if (first != -1) { present++; score += D_089fd5a0[(unsigned char)first]; }
        if (second != -1) { present++; score += D_089fd5a0[(unsigned char)second]; }
    }
    if (present >= 7 || score >= 7) {
        for (i = 0; i < 6; i++) {
            config[0x82 + i] = 0xff;
            config[0x88 + i] = 0xff;
        }
    }

    if (*(unsigned short *)(config + 0x8e) >= 10000)
        *(unsigned short *)(config + 0x8e) = 0;
    if (config[0x90] >= 34) config[0x90] = 0;
    if (!FUN_0882dd6c(D_08a3919c, (unsigned short *)(config + 0x16)) &&
        !FUN_0886ae7c(D_08abce80, (unsigned short *)(config + 0x16), 0))
        *(unsigned short *)(config + 0x16) = 0;
}
