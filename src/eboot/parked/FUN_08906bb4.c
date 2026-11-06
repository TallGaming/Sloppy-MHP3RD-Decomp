/*
 * FUN_08906bb4: classify the half-word at offset 6 into six increasing ranges.
 *
 * Main EBOOT, attempt-high-01. The record and range meanings are hypotheses.
 */

typedef unsigned char u8;
typedef unsigned short u16;

int FUN_08906bb4(u8 *record)
{
    u16 value = *(u16 *)(record + 6);
    int result = 0;

    if (value > 999) {
        result = 1;
        if (value > 0x9c3) {
            result = 2;
            if (value > 0x1193) {
                result = 3;
                if (value > 5999) {
                    result = 4;
                    if (value > 6999)
                        result = 5;
                }
            }
        }
    }
    return result;
}
