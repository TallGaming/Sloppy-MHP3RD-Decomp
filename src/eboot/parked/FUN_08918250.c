/*
 * FUN_08918250: call method 0x3C through an object's table.
 *
 * Main EBOOT, attempt-high-01. The interface and method signature are hypotheses.
 */

typedef unsigned char u8;

void FUN_08918250(void *object)
{
    void *table = *(void **)object;
    void (*method)(void) = *(void (**)(void))((u8 *)table + 0x3c);

    method();
}
