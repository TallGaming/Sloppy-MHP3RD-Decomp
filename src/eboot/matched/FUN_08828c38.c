/*
 * FUN_08828c38: classify the current global-state condition.
 *
 * Names and types are hypotheses unless stated. Offsets and widths come from
 * the reference code.
 */

typedef unsigned char u8;
typedef int s32;
typedef unsigned int u32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

extern u8 *D_08a20fec;

s32 FUN_08828c38(void)
{
    u8 *state = D_08a20fec;
    s32 result = 1;

    if ((u8)(*((u8 *)((u32)state[0x23] + (u32)state) + 0x68) - 3) < 2)
    {
        result = 2;
        if (FIELD(state, s32, 0xd4) > FIELD(state, s32, 0x8c))
        {
            result = 3;
            if (FIELD(state, float, 0x78) <
                FIELD(state, float, 0xd0) + FIELD(state, float, 0xcc))
            {
                result = 3;
            }
            else
            {
                result = 0;
            }
        }
    }

    return result;
}
