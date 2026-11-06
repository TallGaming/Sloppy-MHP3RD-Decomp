/*
 * FUN_088b7bb0: select an indexed object from global state and handle it.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 * PARKED: global base symbol and index/register lowering differ.
 */

typedef unsigned char u8;
typedef unsigned int u32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

extern u8 *D_09bc1ed8;
extern u8 *D_08abce80;
int FUN_088a50bc(void *object);

int FUN_088b7bb0(u8 *table)
{
    u8 index = 0;
    u8 *state = D_09bc1ed8 + 0x110000;

    if (FIELD(state, u32, -0x5cac) & 1) {
        index = D_08abce80[0x26];
    }
    {
        void *object = FIELD(table, void *, 0x08 + index * 4);
        if (object != 0) {
            return FUN_088a50bc(object);
        }
    }
    return 0;
}
