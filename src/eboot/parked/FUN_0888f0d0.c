/* Purpose: initialize a render buffer with three owned work areas. */
extern unsigned char *D_09bb7a7c;
extern unsigned char D_08966f1c[];
extern unsigned char D_08966e64[];
extern unsigned char D_08966f28[];
extern void FUN_088ebb10(void *, int, unsigned int);
extern void FUN_088ebb18(void *, const void *, unsigned int);
extern void FUN_08960fc8(void *, void *);

void FUN_0888f0d0(unsigned char *buffer)
{
    unsigned char *payload = buffer + 0x18;
    unsigned char *first = buffer + 0x618;
    unsigned char *second = buffer + 0x62c;
    unsigned char *third = buffer + 0x66c;

    FUN_088ebb10(payload, 0, 0x600);
    *(int *)(buffer + 0x18) = 0x600;
    *(int *)(buffer + 0x24) = 50;
    *(int *)(buffer + 0x28) = 52;
    *(int *)(buffer + 0x2c) = 51;
    *(int *)(buffer + 0x30) = 41;
    *(int *)(buffer + 0x48) = 8;
    FUN_088ebb18(buffer + 0x54, D_08966f1c, 10);
    FUN_088ebb18(buffer + 0x64, D_08966e64, 3);
    FUN_088ebb18(buffer + 0x7c, D_08966f28, 11);
    *(int *)(buffer + 0x8c) = *(int *)(buffer + 0x94c);
    *(int *)(buffer + 0x90) = 0x121000;
    *(int *)(buffer + 0x94) = 0x121000;
    *(int *)(buffer + 0x59c) = *(int *)(buffer + 0x10);
    *(int *)(buffer + 0x5bc) = *(int *)(buffer + 0x14);
    *(int *)(buffer + 0x5a0) = 0x7000;
    *(int *)(buffer + 0x5a4) = 0x7000;
    *(int *)(buffer + 0x5c0) = 0x3f800;
    *(int *)(buffer + 0x5c4) = 0x3f800;

    FUN_088ebb10(first, 0, 20);
    FUN_088ebb10(second, 0, 64);
    FUN_088ebb10(third, 0, 28);
    *(void **)(buffer + 0x5e8) = first;
    *(void **)(buffer + 0x5ec) = second;
    *(void **)(buffer + 0x5f0) = third;
    FUN_088ebb18(second, D_08966f1c, 10);
    FUN_088ebb18(second + 0x10, D_08966e64, 3);
    FUN_08960fc8(payload, second + 0x10);
    buffer[0x1450] = 1;
    D_09bb7a7c[0x1e] = 1;
}
