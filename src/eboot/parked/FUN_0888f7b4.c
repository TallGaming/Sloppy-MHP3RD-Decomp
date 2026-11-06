/* Purpose: advance staged loading and conversion of four player-profile slots. */
extern unsigned char *D_08abce80;
extern void *D_08a31e84;
extern void *D_09ba7a80;
extern void *D_09beb0a8;
extern int FUN_088559ac(void *, int, int, int, int);
extern int FUN_088550f4(void *, int);
extern int FUN_088bb854(void *, int);
extern void *FUN_088b8ad0(void *, int);
extern void FUN_0889fcc8(void *, int, int, float, float);
extern int FUN_088684f8(void *, int, int);
extern void FUN_088f7284(void *, void *);

static unsigned int read_be32(const unsigned char *source)
{
    return ((unsigned int)source[0] << 24) |
           ((unsigned int)source[1] << 16) |
           ((unsigned int)source[2] << 8) |
           source[3];
}

static void write_be32(unsigned char *destination, unsigned int value)
{
    destination[0] = (unsigned char)value;
    destination[1] = (unsigned char)(value >> 8);
    destination[2] = (unsigned char)(value >> 16);
    destination[3] = (unsigned char)(value >> 24);
}

static void convert_profile(unsigned char *destination,
                            const unsigned char *source)
{
    unsigned int packed;
    int i;

    destination[0] = 1;
    packed = destination[8];
    packed = (packed & ~1U) | (source[27] & 1);
    packed = (packed & ~0xf8U) | ((source[28] & 0x1f) << 3);
    packed = (packed & ~0x600U) | ((source[29] & 3) << 9);
    packed = (packed & ~0xff000U) | ((source[30] & 0xf) << 12);
    packed = (packed & ~0xf00000U) | ((source[31] & 0xf) << 20);
    *(unsigned int *)(destination + 8) = packed;

    write_be32(destination + 120, read_be32(source + 36));
    write_be32(destination + 123, read_be32(source + 40));
    write_be32(destination + 126, read_be32(source + 44));
    write_be32(destination + 20, read_be32(source + 48));
    write_be32(destination + 24, read_be32(source + 52));

    destination[110] = source[57];
    destination[111] = source[69];
    for (i = 0; i < 12; i++)
        destination[16 + i] = source[80 + i];
    for (i = 0; i < 20; i++)
        destination[90 + i] = source[0x5f130 + i];
}

int FUN_0888f7b4(void *value)
{
    unsigned char *state = value;
    volatile unsigned char workspace[48];
    int stage = *(int *)(state + 0x1478);
    int slot;
    int i;
    unsigned char *source;
    unsigned char *destination;
    void *record;

    if (stage == 0) {
        FUN_088559ac(D_08a31e84, 9, 4191, 0, 0);
        *(int *)(state + 0x1478) = 1;
        return 0;
    }

    if (stage == 1) {
        if (FUN_088550f4(D_08a31e84, 9) != 0)
            return 0;
        *(int *)((unsigned char *)D_09ba7a80 + 204) = 0;
        *(int *)(state + 0x1478) = 2;
        return 0;
    }

    slot = (short)(stage - 2);
    if (slot < 0 || slot >= 4)
        return stage == 5;

    source = *(unsigned char **)(state + 0x94c) + slot * 0x60000 + 0x800;
    destination = D_08abce80 + slot * 252 + 48;
    if (source[26] != 1) {
        destination[0] = 0;
    } else {
        for (i = 0; i < 48; i++)
            workspace[i] = source[56 + i];
        convert_profile(destination, source);
        destination[109] = workspace[0];
        if (FUN_088bb854(D_09ba7a80, slot) != 0) {
            record = FUN_088b8ad0(D_09ba7a80, slot);
            FUN_0889fcc8(record, *((unsigned char *)record + 1096) ? 700 : 720,
                         0, 0.0f, 0.0f);
            *(unsigned int *)((unsigned char *)record + 4) |= 4;
            *(unsigned short *)((unsigned char *)record + 1264) =
                (unsigned short)FUN_088684f8(D_08abce80, slot, 5);
            FUN_088f7284(D_09beb0a8, record);
        }
    }

    stage++;
    *(int *)(state + 0x1478) = stage;
    return stage == 5;
}
