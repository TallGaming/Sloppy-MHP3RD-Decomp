/* FUN_08955050: initialize the embedded object groups of a large manager.
 * Main EBOOT, attempt-high-01 241-512 byte batch 22. Group roles are hypotheses. */
extern void *PTR_LAB_0896bab8;
void FUN_088f9cd0(void *);
void FUN_088f9cbc(void *);
void FUN_0890641c(void *);

void FUN_08955050(int *object)
{
    int *cursor;
    int outer;
    int inner;

    *object = (int)&PTR_LAB_0896bab8;
    cursor = object + 0x27ad;
    for (outer = 0; outer != 2; outer++, cursor += 0x14) FUN_088f9cd0(cursor);
    cursor = object + 0x27d6;
    for (outer = 0; outer != 4; outer++, cursor += 0x14) FUN_088f9cd0(cursor);
    FUN_088f9cbc(object + 0x2a34);
    cursor = object + 0x2a50;
    for (outer = 0; outer != 4; outer++, cursor += 0x14) FUN_088f9cd0(cursor);
    cursor = object + 0x2aa6;
    for (outer = 0; outer != 5; outer++, cursor += 0x28) FUN_0890641c(cursor);
    cursor = object + 0x2b6f;
    for (outer = 0; outer != 2; outer++, cursor += 0x29) {
        int *item = cursor + 1;
        for (inner = 0; inner != 2; inner++, item += 0x14) FUN_088f9cd0(item);
    }
    cursor = object + 0x2bc2;
    for (outer = 0; outer != 2; outer++, cursor += 0x14) FUN_088f9cd0(cursor);
    cursor = object + 0x2beb;
    for (outer = 0; outer != 2; outer++, cursor += 0x14) FUN_088f9cd0(cursor);
    cursor = object + 0x2c13;
    for (outer = 0; outer != 0xe; outer++, cursor += 0x14) FUN_088f9cd0(cursor);
}
