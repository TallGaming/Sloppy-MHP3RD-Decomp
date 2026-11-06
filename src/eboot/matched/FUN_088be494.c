/*
 * FUN_088be494: handle an owned object only when the record is in state three.
 *
 * Main EBOOT, G2 leaf-with-branches matching. Names and types are hypotheses.
 */

typedef unsigned char u8;
typedef int s32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

int FUN_08919bc0(void *object);

int FUN_088be494(u8 *record)
{
    if (FIELD(record, s32, 0x0c) == 3) {
        return FUN_08919bc0(FIELD(record, void *, 0x1018));
    }
    return 0;
}
