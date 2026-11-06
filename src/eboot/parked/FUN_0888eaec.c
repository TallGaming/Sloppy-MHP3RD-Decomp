/* Purpose: initialize a resource-backed render buffer for one archive format. */
extern unsigned char *D_089f601c;
extern unsigned char *D_089f6018;
extern unsigned char *D_089f6014;
extern unsigned char *D_09bb7a7c;
extern unsigned char D_08966f1c[];
extern unsigned char D_08966e64[];
extern unsigned char D_08966f28[];
extern void FUN_088ebb10(void *, int, unsigned int);
extern void FUN_0880ea5c(void *, const void *, unsigned int);
extern void FUN_088ebb18(void *, const void *, unsigned int);
extern void FUN_08960fc8(void *, int);

void FUN_0888eaec(unsigned char *buffer, int mode)
{
    unsigned char *payload = buffer + 0x18;

    FUN_088ebb10(payload, 0, 0x600);
    *(int *)(buffer + 0x18) = 0x600;
    *(int *)(buffer + 0x24) = 50;
    *(int *)(buffer + 0x28) = 52;
    *(int *)(buffer + 0x2c) = 51;
    *(int *)(buffer + 0x30) = 41;
    *(int *)(buffer + 0x48) = mode;
    *(int *)(buffer + 0x50) = 1;
    *(int *)(buffer + 0x94) = 0x121000;
    FUN_0880ea5c(buffer + 0x98, D_089f601c, 0x80);
    FUN_0880ea5c(buffer + 0x118, D_089f6018, 0x80);
    FUN_0880ea5c(buffer + 0x198, D_089f6014, 0x400);
    buffer[0x598] = 7;

    FUN_088ebb18(buffer + 0x54, D_08966f1c, 10);
    FUN_088ebb18(buffer + 0x64, D_08966e64, 3);
    FUN_088ebb18(buffer + 0x7c, D_08966f28, 11);
    *(int *)(buffer + 0x8c) = *(int *)(buffer + 0x94c);
    *(int *)(buffer + 0x90) = 0x121000;
    *(int *)(buffer + 0x59c) = *(int *)(buffer + 0x10);
    *(int *)(buffer + 0x5bc) = *(int *)(buffer + 0x14);
    *(int *)(buffer + 0x5a0) = 0x7000;
    *(int *)(buffer + 0x5a4) = 0x6d00;
    *(int *)(buffer + 0x5c0) = 0x3f800;
    *(int *)(buffer + 0x5c4) = 0x3f800;
    *(int *)(buffer + 0x604) = 0;
    FUN_08960fc8(payload, *(int *)(buffer + 0x94c));
    buffer[0x1450] = 1;
    D_09bb7a7c[0x1e] = 1;
}
