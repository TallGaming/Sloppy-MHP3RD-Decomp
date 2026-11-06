/* Purpose: calculate an entry score from rank, flags, traits, and an external bonus. */
extern void *D_09bb7a80;
extern int D_09befbd4;
extern unsigned char DAT_089fd5ea[];
extern int FUN_0886f274(void *, void *);
extern unsigned int FUN_0890683c(void *);
extern int FUN_08906a60(void *);
extern int FUN_08906a78(void *, int);
extern int FUN_08906bb4(void *);
extern int FUN_089079bc(void *);
extern int FUN_08906a54(void *);
extern int FUN_0890681c(void *, int);
extern int FUN_088b7518(void *);
extern int FUN_088b89fc(void *);
extern int FUN_089062c4(void *, int);
extern int FUN_089439f0(int, int);

int FUN_0886f784(void *object, void *entry)
{
    int score;
    if (FUN_0886f274(object, entry) != 0) {
        int active;
        if (FUN_0890681c(entry, 1) != 0)
            active = FUN_088b89fc(D_09bb7a80);
        else if (FUN_0890681c(entry, 2) != 0)
            active = FUN_088b7518(D_09bb7a80);
        else
            return 1;
        return active != 0 ? 1 : 1;
    }
    {
        unsigned int rank = FUN_0890683c(entry) & 0xff;
        if (((rank - 1) & 0xff) >= 0x14)
            rank = 1;
        score = DAT_089fd5ea[rank * 8] + FUN_08906a60(entry);
    }
    if (FUN_08906a78(entry, 0xf) != 0) score += 5;
    if (FUN_08906a78(entry, 0x10) != 0) score += 0x14;
    if (FUN_08906a78(entry, 0x23) != 0) score += 0x32;
    if (FUN_08906bb4(entry) == 5) score += 0x14;
    if (FUN_089079bc(entry) == 1) score += 0x14;
    if (FUN_08906a54(entry) == 1) score += 0x14;
    if (FUN_08906a54(entry) == 2) score -= 0x14;
    return score + FUN_089439f0(D_09befbd4, FUN_089062c4(entry, 2));
}
