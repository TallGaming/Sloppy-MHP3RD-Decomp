/*
 * FUN_08828d68: update the global state's part when both guards permit it.
 *
 * Names and types are hypotheses unless stated. Offsets and widths come from
 * the reference code.
 */

typedef unsigned char u8;
typedef int s32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

extern u8 *D_08a20fec;
s32 FUN_088287c8(void);
s32 FUN_08828c38(void);
void FUN_088271ac(void *state, void *part, s32 value);

void FUN_08828d68(void)
{
    u8 *state = D_08a20fec;

    if (FIELD(state, s32, 0x1c) == 0)
        return;
    if (FUN_088287c8() != 0)
        return;
    if (FUN_08828c38() != 0)
        return;

    FUN_088271ac(state, state + 0x19c, 2);
}
