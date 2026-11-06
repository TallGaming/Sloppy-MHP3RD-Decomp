/*
 * FUN_088c5198: write a value into the current global bank.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 * PARKED: code shape matches, but the global base has no absolute symbol.
 */

typedef unsigned char u8;
typedef unsigned int u32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

extern u8 D_089e8574;

void FUN_088c5198(u8 *record, int index, u32 value)
{
    u32 bank = FIELD(record, u32, 0x2f8d40);

    *(u32 *)(&D_089e8574 + bank * 0x54 + index * 4) = value;
}
