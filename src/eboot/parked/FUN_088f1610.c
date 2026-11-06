/*
 * FUN_088f1610: initialize a large object, set its table, and clear its buffer.
 *
 * Main EBOOT, G2 high-address slice. The object layout and table role are hypotheses.
 */

typedef unsigned char u8;

void FUN_088aed20(void *object);
void FUN_0880c468(void *destination, int value, unsigned int size);

void FUN_088f1610(void *object)
{
    FUN_088aed20(object);
    *(void **)object = (void *)0x0896b190;
    FUN_0880c468((u8 *)object + 0x1420, 0, 0x2e000);
}
