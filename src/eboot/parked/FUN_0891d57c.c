/*
 * FUN_0891d57c: invoke methods 0x14, 0x18 and 0x1C on an object.
 *
 * Main EBOOT, attempt-high-01 batch 2. The interface method signatures are hypotheses.
 */

typedef unsigned char u8;

void FUN_0891d57c(void *object)
{
    u8 *table = *(u8 **)object;
    void (*first)(void) = *(void (**)(void))(table + 0x14);
    void (*second)(void *) = *(void (**)(void *))(table + 0x18);
    void (*third)(void *) = *(void (**)(void *))(table + 0x1c);

    first();
    second(object);
    third(object);
}
