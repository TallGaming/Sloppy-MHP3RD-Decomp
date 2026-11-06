/* FUN_0895c2bc: destroy four embedded-object groups and release the manager.
 * Main EBOOT, attempt-high-01 241-512 byte batch 23. Group roles are hypotheses. */
extern void *PTR_LAB_0896abc0;
extern void *D_08ab4660;
void FUN_088f9cdc(void *);
void FUN_08818434(void *);

void FUN_0895c2bc(int *object)
{
    int *cursor;
    int count;

    *object = (int)&PTR_LAB_0896abc0;
    cursor = object + 0x14e;
    for (count = 4; count != 0; count--) { cursor -= 0x14; FUN_088f9cdc(cursor); }
    cursor = object + 0xf4;
    for (count = 5; count != 0; count--) { cursor -= 0x14; FUN_088f9cdc(cursor); }
    cursor = object + 0x90;
    for (count = 2; count != 0; count--) { cursor -= 0x14; FUN_088f9cdc(cursor); }
    cursor = object + 0x68;
    for (count = 4; count != 0; count--) { cursor -= 0x14; FUN_088f9cdc(cursor); }
    FUN_088f9cdc(object + 3);
    D_08ab4660 = 0;
    FUN_08818434(object);
}
