/*
 * FUN_088c3dc8: advance an interpolated short value and service the subsystem.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 */

typedef unsigned char u8;
typedef short s16;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

void FUN_088c3db8(void *record, int value);
void FUN_088542f0(void);

void FUN_088c3dc8(u8 *record)
{
    s16 remaining = FIELD(record, s16, 0x2ba) - 1;

    if (FIELD(record, s16, 0x2ba) > 0) {
        FIELD(record, s16, 0x2ba) = remaining;
        FUN_088c3db8(record,
            FIELD(record, s16, 0x2b4) +
            (FIELD(record, s16, 0x2b6) - FIELD(record, s16, 0x2b4)) *
            (FIELD(record, s16, 0x2b8) - remaining) /
            FIELD(record, s16, 0x2b8));
    }
    FUN_088542f0();
}
