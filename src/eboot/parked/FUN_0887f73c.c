/* Purpose: copy or filter a 117-entry network roster into a compact buffer. */
extern unsigned char *D_08abce80;
extern void FUN_088ebb18(void *, const void *, unsigned int);
extern unsigned char *FUN_0886d8a0(void *, int);
extern unsigned char *FUN_0887f468(unsigned char *, int);
extern int FUN_0887f48c(unsigned char *, unsigned char *, int,
                        unsigned short *, unsigned short *, int, int);
extern int FUN_0887dde0(void *, void *, int, int);
extern int FUN_0886ce3c(void *, unsigned short);
extern int FUN_0887e9c4(void *, unsigned short);

void FUN_0887f73c(unsigned char *output, int bank, int mode,
                  unsigned char include_unknown)
{
    unsigned char accepted[117];
    unsigned char rejected[117];
    unsigned char index;
    unsigned short first;
    unsigned short second;
    unsigned char *source;
    int accepted_count = 0;
    int rejected_count = 0;
    int i;

    if (mode == 0)
        return;

    source = FUN_0886d8a0(D_08abce80, bank == 0 ? 0 : 1);
    if (mode == 1 || mode == 2) {
        FUN_088ebb18(output + 1, source, 117);
        if (include_unknown && bank == 0)
            FUN_088ebb18(source, output + 1, 117);
        return;
    }
    if (mode != 3)
        return;

    source = FUN_0887f468(output, 1);
    for (i = 0; i < 117; i++) {
        index = 0;
        first = 0;
        second = 0;
        if (!FUN_0887f48c(output, &index, 1, &first, &second, 1, 0))
            break;

        if (bank == 0) {
            if (FUN_0887dde0(*(void **)(D_08abce80 + 5480), source, 0, 0) == 0 &&
                FUN_0886ce3c(D_08abce80, first) != 255 &&
                FUN_0886ce3c(D_08abce80, second) != 255)
                accepted[accepted_count++] = source[index];
            else
                rejected[rejected_count++] = source[index];
        } else {
            if (FUN_0887e9c4(*(void **)(D_08abce80 + 5480), first) &&
                FUN_0887e9c4(*(void **)(D_08abce80 + 5480), second))
                accepted[accepted_count++] = source[index];
            else
                rejected[rejected_count++] = source[index];
        }
    }

    FUN_088ebb18(output + 1, accepted, accepted_count);
    if (include_unknown)
        FUN_088ebb18(output + 1 + accepted_count, rejected, rejected_count);
}
