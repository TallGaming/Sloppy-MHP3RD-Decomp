/*
 * FUN_0889f740: refresh a record value when its enable byte is set.
 *
 * Main EBOOT, G2 frame-plus-branches matching. Names and types are hypotheses.
 */

typedef unsigned char u8;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

void *FUN_0887b830(void *record);

void FUN_0889f740(u8 *record)
{
    if (record[0x0c] != 0) {
        FIELD(record, void *, 0x08) = FUN_0887b830(record);
    }
}
