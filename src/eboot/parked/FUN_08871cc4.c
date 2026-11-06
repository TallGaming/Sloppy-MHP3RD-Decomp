/* Purpose: populate up to three live player summaries from staged records. */
extern unsigned int FUN_08869da0(void *, void *, int);
extern void FUN_0880c468(void *, int, int);
extern void FUN_08870018(void *);

static void write_color(unsigned char *destination, unsigned int value)
{
    destination[0] = value;
    destination[1] = value >> 8;
    destination[2] = value >> 16;
}

int FUN_08871cc4(unsigned char *state, char enabled)
{
    unsigned char *source = state + 0x5aaec;
    unsigned char *output = state + 300;
    int active = 0;
    int record;

    for (record = 0; record < 3; record++, source += 0xdc0, output += 0xfc) {
        int i;
        if (enabled != 1) {
            FUN_0880c468(output, 0, 0xfc);
            continue;
        }
        if (*(short *)(source + 4) == 0)
            continue;
        output[0] = 1;
        *(unsigned int *)(output + 8) =
            (*(unsigned int *)(output + 8) & 0xffff0000) |
            ((*(unsigned int *)(source + 0x2c) & 0x1ff) >> 8) |
            ((source[0x3d] & 3) << 1) | ((source[0x3e] & 0xf) << 8) |
            ((source[0x3f] & 0xf) << 12);
        active++;
        write_color(output + 0x78, FUN_08869da0(state, source + 4, 0));
        write_color(output + 0x7b, FUN_08869da0(state, source + 4, 1));
        write_color(output + 0x7e, FUN_08869da0(state, source + 4, 2));
        *(unsigned int *)(output + 0x14) = FUN_08869da0(state, source + 4, 3);
        *(unsigned int *)(output + 0x18) = FUN_08869da0(state, source + 4, 4);
        output[0x76] = *(unsigned short *)(source + 0x1e);
        output[0x77] = 0x65;
        *(unsigned short *)(output + 0x4e) = *(unsigned short *)(source + 0x20);
        *(unsigned int *)(output + 0x58) =
            (*(unsigned int *)(output + 0x58) & ~0xfU) | (source[0x2c] & 0xf);
        for (i = 0; i < 5; i++) {
            *(unsigned short *)(output + 0x1c + i * 10) = *(unsigned short *)(source + 0x22 + i * 2);
            *(unsigned int *)(output + 0x62 + i * 4) = *(unsigned int *)(source + 0x40 + i * 4);
            output[0x81 + i] = 0;
        }
        output[0xb] = source[0xbe];
    }
    FUN_08870018(state);
    return active;
}
