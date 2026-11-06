/* FUN_08948f40: destroy three high-offset groups of embedded objects.
 * Main EBOOT, attempt-high-01 241-512 byte batch 18. Group roles are hypotheses. */
extern void *PTR_FUN_0896ba68;
extern void *PTR_LAB_0896a890;
void FUN_088f9cdc(void *);

void FUN_08948f40(int *object)
{
    int *cursor;
    int *start;
    int count;

    *object = (int)&PTR_FUN_0896ba68;
    if (object != (int *)0xffffcb38 && object + 0xd32 != object + 0xd82) {
        cursor = object + 0xd82;
        for (count = 4; count != 0; count--) {
            cursor -= 0x14;
            FUN_088f9cdc(cursor);
        }
    }
    start = object + 0xc7d;
    if (start != 0 && start != object + 0xd31) {
        cursor = object + 0xd31;
        for (count = 9; count != 0; count--) {
            cursor -= 0x14;
            FUN_088f9cdc(cursor);
        }
    }
    if (object != (int *)0xffffceac && object + 0xc55 != start) {
        cursor = start;
        for (count = 2; count != 0; count--) {
            cursor -= 0x14;
            FUN_088f9cdc(cursor);
        }
    }
    *object = (int)&PTR_LAB_0896a890;
}
