/*
 * FUN_088bc488: combine two byte pairs into a signed short with a default.
 *
 * Main EBOOT, G2 leaf-with-branches matching. Names and types are hypotheses.
 */

typedef unsigned char u8;
typedef short s16;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

void FUN_088bc488(u8 *record, u8 low_a, u8 high_a, u8 low_b, u8 high_b)
{
    /* Keep the pair sums separate because the reference constructs both first. */
    s16 first = (s16)(low_a + (high_a << 8));
    s16 second = (s16)(low_b + (high_b << 8));
    s16 value = first + second;

    FIELD(record, s16, 0x21b6) = value;
    if (value == 0) {
        FIELD(record, s16, 0x21b6) = 451;
    }
}
