/* Purpose: compute a weighted score from a configuration object and live state. */
extern unsigned char D_089fd5eb[];
extern void *D_09befbd4;
extern void *D_09bb7a80;
extern int FUN_0886f274(void);
extern unsigned int FUN_0890683c(void *);
extern int FUN_08906a6c(void *);
extern int FUN_08906a78(void *, int);
extern int FUN_08906bb4(void *);
extern int FUN_089079bc(void *);
extern int FUN_08906a54(void *);
extern int FUN_089062c4(void *, int);
extern int FUN_08943c70(void *, int, int, int);
extern int FUN_0890681c(void *, int);
extern int FUN_088b7518(void *);
extern int FUN_088b89fc(void *);

int FUN_0886f530(int unused, void *object)
{
    int score;
    (void)unused;
    if (FUN_0886f274() != 0) {
        if (FUN_0890681c(object, 1) != 0)
            FUN_088b89fc(D_09bb7a80);
        else if (FUN_0890681c(object, 2) != 0)
            FUN_088b7518(D_09bb7a80);
        return 1;
    }
    {
        unsigned int kind = FUN_0890683c(object) & 0xff;
        if (kind < 1 || kind > 20) kind = 1;
        score = D_089fd5eb[kind * 8] + FUN_08906a6c(object);
    }
    if (FUN_08906a78(object, 0x11) != 0) score += 10;
    if (FUN_08906a78(object, 0x12) != 0) score += 30;
    if (FUN_08906a78(object, 0x23) != 0) score += 50;
    if (FUN_08906bb4(object) == 5) score += 20;
    if (FUN_089079bc(object) == 1) score += 20;
    if (FUN_08906a54(object) == 2) score += 20;
    if (FUN_08906a54(object) == 1) score -= 20;
    if (FUN_08906a54(object) == 3) score -= 20;
    return score + FUN_08943c70(D_09befbd4, FUN_089062c4(object, 2),
                                FUN_089062c4(object, 1), FUN_089062c4(object, 0));
}
