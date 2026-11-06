/* Purpose: add progress, convert it into capped percentage steps, and notify active UI services. */
extern unsigned char *D_08aace80;
extern void *D_09e6aad8;
extern void *D_09bb7a80;
extern void func_0x09d24c7c(void *);
extern void FUN_088b6544(void *);

void FUN_0886db74(int unused, int amount)
{
    unsigned int step = 0x14;
    unsigned int gained;
    unsigned int total;
    unsigned int progress;

    (void)unused;
    total = *(unsigned int *)(D_08aace80 + 0x5d488) + amount;
    *(unsigned int *)(D_08aace80 + 0x5d488) = total;
    if (total > 99999999)
        *(unsigned int *)(D_08aace80 + 0x5d488) = 99999999;
    if (D_08aace80[0x5148] > 2)
        step = 0x32;
    gained = (*(int *)(D_08aace80 + 0x5d488) - *(int *)(D_08aace80 + 0x5d48c)) / step;
    if ((int)gained > 0) {
        progress = gained + D_08aace80[0x5d495];
        *(unsigned int *)(D_08aace80 + 0x5d48c) += step * gained;
        D_08aace80[0x5d495] = progress < 100 ? progress : 99;
        if ((*(unsigned int *)(D_08aace80 + 0x60474) & 1) != 0) {
            func_0x09d24c7c(D_09e6aad8);
            FUN_088b6544(D_09bb7a80);
        }
    }
}
