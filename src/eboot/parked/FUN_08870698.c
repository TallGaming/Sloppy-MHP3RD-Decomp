/* Purpose: rotate and repopulate three groups of randomized event records. */
extern unsigned char *D_08abce80;
extern void *D_09bc1ed8;
extern unsigned short D_089d8968[];
extern unsigned int FUN_088e62f0(void *, int);
extern void FUN_088ebb10(void *, int, unsigned int);
extern void FUN_088ebb18(void *, const void *, unsigned int);
extern int FUN_0880bff4(const void *, const void *, unsigned int);

static int record_is_duplicate(unsigned char *object,
                               const unsigned char *identity)
{
    int group;
    int slot;

    for (group = 0; group < 3; group++) {
        unsigned char *history = object + 0x5d42c + group * 24;
        for (slot = 0; slot < 3; slot++)
            if (FUN_0880bff4(history + slot * 8, identity, 8) == 0)
                return 1;
    }
    for (group = 0; group < 3; group++) {
        unsigned char *current = object + 0x5aaec + group * 0xdc0;
        if (FUN_0880bff4(current + 0x2ac, identity, 8) == 0)
            return 1;
    }
    return 0;
}

void FUN_08870698(unsigned char *object)
{
    unsigned char *global = D_08abce80;
    int active_count = 0;
    int group;
    int index;

    for (group = 0; group < 3; group++) {
        unsigned char *history = object + 0x5d42c + group * 24;
        FUN_088ebb18(history + 16, history + 8, 8);
        FUN_088ebb18(history + 8, history, 8);
        FUN_088ebb10(history, 0, 8);
    }

    for (index = 0; index < 96; index++)
        if (*(unsigned short *)(global + 0x67b0 + index * 0xdbc) != 0)
            active_count++;

    for (group = 0; group < 3; group++) {
        unsigned char *output = object + 0x5aaec + group * 0xdc0;
        unsigned char retries = output[0] - 1;
        int attempt;

        output[0] = retries;
        if ((signed char)retries <= 0) {
            FUN_088ebb18(output + 0x2ac, output + 0x558, 8);
            FUN_088ebb10(output, 0, 0xdc0);
        }
        if (active_count == 0)
            continue;

        for (attempt = 0; attempt < 97; attempt++) {
            int selected = FUN_088e62f0(D_09bc1ed8, 1) % active_count;
            unsigned char *candidate = global + 0x67a0 + selected * 0xdbc;
            unsigned char *identity = candidate + 0x2b8;

            if (*(unsigned short *)(candidate + 0x10) == 0)
                continue;
            if (record_is_duplicate(object, identity))
                continue;
            if ((FUN_088e62f0(D_09bc1ed8, 1) & 31) >=
                D_089d8968[group * 3])
                continue;

            if (*(unsigned short *)(global + 0x6d490) < 999)
                (*(unsigned short *)(global + 0x6d490))++;
            FUN_088ebb18(output + 4, candidate + 0x10, 0xdbc);
            output[0] = 3 + (FUN_088e62f0(D_09bc1ed8, 1) & 1);
            *(unsigned int *)output |= 0x4000;
            if ((FUN_088e62f0(D_09bc1ed8, 1) & 7) < 3)
                *(unsigned int *)output |= 0x8000;
            output[2] = *(unsigned short *)(global + 0x6d490) < 101 ? 0 : 2;
            output[3] = FUN_088e62f0(D_09bc1ed8, 1) & 15;
            break;
        }
    }
}
