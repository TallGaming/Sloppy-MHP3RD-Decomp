/*
 * FUN_0888de6c: split a packed pair and replace zero components with defaults.
 *
 * Main EBOOT, G2 leaf-with-branches matching. Names and types are hypotheses.
 */

typedef unsigned char u8;
typedef unsigned int u32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

void FUN_0888de6c(u8 *record, u32 packed)
{
    u32 low = packed & 0xffff;
    u32 high = packed >> 16;

    FIELD(record, u32, 0x2568) = high;
    FIELD(record, u32, 0x2564) = low;
    if (low == 0) {
        FIELD(record, u32, 0x2564) = 0x215f;
    }
    /* Test the stored field because the reference reloads it here. */
    if (FIELD(record, u32, 0x2568) == 0) {
        FIELD(record, u32, 0x2568) = 0xdfa3;
    }
}
