/* Purpose: rebuild the cached profile, appearance, and forty skill summaries. */
extern unsigned short D_089d8918[];
extern unsigned char D_089d88f0[];
extern void FUN_0886e918(void *, void *, const void *, signed char);
extern unsigned short FUN_088666d0(void *, unsigned char);
extern unsigned short FUN_088666e8(void *, unsigned char);
extern unsigned short FUN_08866a48(void *, unsigned short);
extern unsigned short FUN_08866abc(void *, unsigned short);
extern void FUN_0886675c(void *, unsigned char, unsigned short,
                        unsigned char *, unsigned char);
extern unsigned int FUN_0886a554(const void *, unsigned int);
extern int FUN_0886c234(void *);
extern unsigned int FUN_08866614(void *, unsigned short);

void FUN_0886fa44(unsigned char *object)
{
    unsigned char *cache = object + 0x58e30;
    int index;
    int rating;

    *(unsigned int *)(object + 0x59bdc) = *(unsigned int *)(object + 0x550f4);
    *(unsigned short *)(object + 0x58e4a) = object[0x895];
    *(unsigned short *)(object + 0x58e4c) = *(unsigned short *)(object + 0x896);
    for (index = 0; index < 5; index++)
        *(unsigned short *)(object + 0x58e4e + index * 2) =
            *(unsigned short *)(object + 0x8ae + index * 12);

    if (*(unsigned short *)(object + 0x515a) == 0xffff) {
        cache[0x28] = 0xff;
    } else {
        cache[0x28] = *(unsigned short *)(object + 0x8a2) & 0x0f;
    }
    *(unsigned int *)(cache + 0x28) |= (unsigned int)object[0x877] << 8;

    for (index = 0; index < 5; index++)
        FUN_0886e918(object, cache, object + 0x880 + index * 4,
                     (signed char)index);
    cache[0x39] = object[0x879];
    cache[0x3a] = object[0x87a];
    cache[0x3b] = object[0x87b];

    for (index = 0; index < 40; index++) {
        unsigned short identifier = D_089d8918[index];
        unsigned char kind = identifier & 0xff;
        unsigned char *entry = object + 0x58ef8 + index * 12;
        unsigned char classification[6];

        *(unsigned short *)(entry + 0) = FUN_088666d0(object, kind);
        *(unsigned short *)(entry + 2) = FUN_088666e8(object, kind);
        FUN_0886675c(object, kind, FUN_08866a48(object, identifier),
                     classification, 0);
        *(unsigned short *)(entry + 4) = *(unsigned short *)(classification + 2);
        entry[8] = *(unsigned short *)(classification + 4);
        FUN_0886675c(object, kind, FUN_08866abc(object, identifier),
                     classification, 0);
        *(unsigned short *)(entry + 6) = *(unsigned short *)(classification + 2);
        entry[9] = *(unsigned short *)(classification + 4);
        if (FUN_0886a554(object, D_089d88f0[index]))
            *(unsigned int *)(cache + index * 12 + 0xd0) |= 0x10000;
    }

    cache[0xba] = object[0x5148];
    rating = FUN_0886c234(object);
    if (rating < 90)
        cache[0xbb] = 0;
    else if (rating < 170)
        cache[0xbb] = 1;
    else if (rating < 220)
        cache[0xbb] = 2;
    else if (rating < 270)
        cache[0xbb] = 3;
    else
        cache[0xbb] = FUN_08866614(object, 0x2a58) ? 4 : 3;
}
