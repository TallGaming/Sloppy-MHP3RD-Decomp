/*
 * FUN_088e7060: classify a 16-bit character code for layout accounting.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact instruction count retains one parameter-extension difference.
 */
typedef unsigned short u16;

int FUN_088e7060(void *unused, int code)
{
    int value = (short)code;

    if ((u16)(value - 0x250) < 0x1db0 ||
        (u16)(value + 0xe000) < 0x70 ||
        (u16)(value + 0xdf90) < 0x30) {
        return 0;
    }
    if ((u16)(value + 0xdf60) > 0x2f) {
        if ((u16)(value + 0xdf30) < 0xde90) {
            return 0;
        }
        if ((u16)(value + 0xa0) < 0x80) {
            return 2;
        }
        if ((u16)(value + 0x20) < 0x10) {
            return 0;
        }
    }
    return 1;
}
