/* FUN_08946ee0: initialize six groups of embedded objects and clear state.
 * Main EBOOT, attempt-high-01 241-512 byte batch 18. Group roles are hypotheses. */
typedef unsigned char u8;

extern void *PTR_FUN_0896b9e0;
void FUN_088f9cd0(void *);
void FUN_08885bb8(void);

void FUN_08946ee0(int *object)
{
    int *cursor;
    int count;

    object[2] = 1;
    object[1] = 0xc;
    object[0] = (int)&PTR_FUN_0896b9e0;
    object[5] = 0;
    cursor = object;
    for (count = 4; count != 0; count--) {
        cursor += 0x14;
        FUN_088f9cd0(cursor);
    }
    cursor = object + 0x66;
    for (count = 4; count != 0; count--, cursor += 0x14) {
        FUN_088f9cd0(cursor);
    }
    cursor = object + 0xb6;
    for (count = 4; count != 0; count--, cursor += 0x14) {
        FUN_088f9cd0(cursor);
    }
    cursor = object + 0x106;
    for (count = 10; count != 0; count--, cursor += 0x14) {
        FUN_088f9cd0(cursor);
    }
    cursor = object + 0x1ce;
    for (count = 2; count != 0; count--, cursor += 0x14) {
        FUN_088f9cd0(cursor);
    }
    cursor = object + 0x1f8;
    for (count = 2; count != 0; count--, cursor += 0x14) {
        FUN_088f9cd0(cursor);
    }
    object[0x319] = 0;
    ((u8 *)object)[0x1c] = 0;
    ((u8 *)object)[0x1d] = 0;
    ((u8 *)object)[0x1e] = 0;
    ((u8 *)object)[0x1f] = 0;
    FUN_08885bb8();
}
