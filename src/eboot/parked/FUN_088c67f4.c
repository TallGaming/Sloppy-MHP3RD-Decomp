/*
 * FUN_088c67f4: reset bank globals and switch the active bank when needed.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 * PARKED: three global addresses lack symbols and the store schedule differs.
 */

typedef unsigned char u8;
typedef unsigned int u32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

extern u32 D_089e87a8;
extern u32 D_089e87ac;
extern u32 D_089e87b0;
void FUN_088c6670(void *record, void *value);

void FUN_088c67f4(u8 *record, int bank, void *value)
{
    FIELD(record, u32, 0x727db4) = 0;
    D_089e87a8 = 0x25e800;
    D_089e87b0 = 0;
    D_089e87ac = 0;
    if (FIELD(record, int, 0x2f8d40) == bank) {
        return;
    }
    FIELD(record, int, 0x2f8d40) = bank;
    FUN_088c6670(record, value);
}
