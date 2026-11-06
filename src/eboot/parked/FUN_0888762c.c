/* Purpose: run a global setup, then initialize one embedded object. */
extern void FUN_088875b8(void);
extern void FUN_088851dc(void *object, unsigned int second, unsigned int third);

void FUN_0888762c(void *object, unsigned int second, unsigned int third)
{
    FUN_088875b8();
    FUN_088851dc((unsigned char *)object + 0x24f0, second, third);
}
