/* Purpose: initialize a padded render buffer and its layout descriptors. */
extern unsigned char D_08966e28[];
extern unsigned char D_08966e34[];
extern unsigned char D_08966e40[];
extern unsigned char D_08966e4c[];
extern const char *D_089d092c[];
extern void FUN_088ebb10(void *, int, unsigned int);
extern void FUN_088ebb18(void *, const void *, unsigned int);
extern void FUN_0880e654(void *, const char *);
extern void FUN_08960fc8(void *, int);

void FUN_0888cc84(unsigned char *buffer, int variant)
{
    unsigned char *payload = buffer + 0x18;

    FUN_088ebb10(payload, 0, 0x600);
    *(int *)(buffer + 0x18) = 0x600;
    *(int *)(buffer + 0x24) = 50;
    *(int *)(buffer + 0x28) = 52;
    *(int *)(buffer + 0x2c) = 51;
    *(int *)(buffer + 0x30) = 41;
    *(int *)(buffer + 0x1c) = 0;
    *(int *)(buffer + 0x20) = 0;
    *(int *)(buffer + 0x48) = 0;
    FUN_088ebb18(buffer + 0x54, D_08966e28, 10);

    if (variant == 0) {
        FUN_088ebb18(buffer + 0x64, D_08966e34, 11);
        FUN_088ebb18(buffer + 0x7c, D_08966e40, 11);
    } else {
        FUN_0880e654(buffer + 0x64, D_089d092c[variant - 1]);
        FUN_088ebb18(buffer + 0x7c, D_08966e4c, 9);
    }

    *(int *)(buffer + 0x8c) = *(int *)(buffer + 0x94c);
    *(int *)(buffer + 0x90) = 0x121000;
    *(int *)(buffer + 0x59c) = *(int *)(buffer + 0x10);
    *(int *)(buffer + 0x5a0) = 0x7000;
    *(int *)(buffer + 0x5a4) = 0x7000;
    *(int *)(buffer + 0x5ac) = 0;
    *(int *)(buffer + 0x5b0) = 0;
    *(int *)(buffer + 0x5b4) = 0;
    *(int *)(buffer + 0x5bc) = 0;
    *(int *)(buffer + 0x5c0) = 0;
    *(int *)(buffer + 0x5c4) = 0;
    *(int *)(buffer + 0x5cc) = 0;
    *(int *)(buffer + 0x5d0) = 0;
    *(int *)(buffer + 0x5d4) = 0;
    *(int *)(buffer + 0x5dc) = 0;
    *(int *)(buffer + 0x604) = 3;
    FUN_08960fc8(payload, *(int *)(buffer + 0x10));
    buffer[0x1450] = 1;
}
