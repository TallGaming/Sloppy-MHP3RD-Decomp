/* Purpose: validate a queued descriptor against three global subsystem checks. */
extern unsigned char D_09bb7a5c[];
extern void *D_08aace80;
extern unsigned int D_09bb7e90;
extern int FUN_088bdf28(unsigned int value);
extern int FUN_0886624c(void *object, unsigned short value);
extern unsigned int FUN_088cca4c(unsigned int value);

unsigned int FUN_088603ec(unsigned int unused, unsigned int *entry)
{
    unsigned char *descriptor;
    (void)unused;
    if (FUN_088bdf28(*(unsigned int *)(D_09bb7a5c + 0x104)) == 0) {
        descriptor = (unsigned char *)entry[5];
        if (FUN_0886624c(D_08aace80, *(unsigned short *)descriptor) == 0)
            return descriptor[3] == FUN_088cca4c(D_09bb7e90);
        entry[0] = 0;
    }
    return 0xffffffff;
}
