/* FUN_08946d34: destroy six contiguous groups of embedded objects.
 * Main EBOOT, attempt-high-01 241-512 byte batch 17. Group roles are hypotheses. */
extern void *PTR_FUN_0896b9e0;
extern void *PTR_LAB_0896a890;

void FUN_088f9cdc(void *);

void FUN_08946d34(int *object)
{
    int *cursor;
    int count;

    *object = (int)&PTR_FUN_0896b9e0;
    cursor = object + 0x220;
    for (count = 2; count != 0; count--) {
        cursor -= 0x14;
        FUN_088f9cdc(cursor);
    }
    cursor = object + 0x1f6;
    for (count = 2; count != 0; count--) {
        cursor -= 0x14;
        FUN_088f9cdc(cursor);
    }
    cursor = object + 0x1ce;
    for (count = 10; count != 0; count--) {
        cursor -= 0x14;
        FUN_088f9cdc(cursor);
    }
    cursor = object + 0x106;
    for (count = 4; count != 0; count--) {
        cursor -= 0x14;
        FUN_088f9cdc(cursor);
    }
    cursor = object + 0xb6;
    for (count = 4; count != 0; count--) {
        cursor -= 0x14;
        FUN_088f9cdc(cursor);
    }
    cursor = object + 100;
    for (count = 4; count != 0; count--) {
        cursor -= 0x14;
        FUN_088f9cdc(cursor);
    }
    *object = (int)&PTR_LAB_0896a890;
}
