/* FUN_08908690: copy a second fixed-size serialized record variant.
 * Main EBOOT, attempt-high-01 513-1024 byte batch 3. Field roles are unknown. */
void FUN_088ebb18(void *, const void *, int);

void FUN_08908690(char *destination, const char *source)
{
    int i;
    FUN_088ebb18(destination, source, 2);
    FUN_088ebb18(destination + 2, source + 2, 1);
    FUN_088ebb18(destination + 3, source + 3, 1);
    FUN_088ebb18(destination + 4, source + 4, 2);
    FUN_088ebb18(destination + 6, source + 6, 2);
    FUN_088ebb18(destination + 8, source + 8, 0x1a);
    FUN_088ebb18(destination + 0x22, source + 0x22, 0x1e);
    FUN_088ebb18(destination + 0x40, source + 0x40, 0x1a);
    FUN_088ebb18(destination + 0x5a, source + 0x5a, 2);
    FUN_088ebb18(destination + 0x5c, source + 0x5c, 1);
    FUN_088ebb18(destination + 0x5d, source + 0x5d, 1);
    FUN_088ebb18(destination + 0x5e, source + 0x5e, 1);
    FUN_088ebb18(destination + 0x5f, source + 0x5f, 1);
    FUN_088ebb18(destination + 0x60, source + 0x60, 8);
    FUN_088ebb18(destination + 0x68, source + 0x68, 6);
    FUN_088ebb18(destination + 0x6e, source + 0x6e, 6);
    FUN_088ebb18(destination + 0x74, source + 0x74, 6);
    FUN_088ebb18(destination + 0x7a, source + 0x7a, 2);
    FUN_088ebb18(destination + 0x7c, source + 0x7c, 0x10);
    FUN_088ebb18(destination + 0x8c, source + 0x8c, 0xc);
    for (i = 0; i != 3; i++) {
        destination[0x8d + i * 4] = (char)i;
    }
    FUN_088ebb18(destination + 0x98, source + 0x98, 1);
    FUN_088ebb18(destination + 0x99, source + 0x99, 1);
    FUN_088ebb18(destination + 0x9a, source + 0x9a, 1);
    FUN_088ebb18(destination + 0x9b, source + 0x9b, 1);
    FUN_088ebb18(destination + 0x9c, source + 0x9c, 1);
}
