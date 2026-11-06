typedef unsigned char u8;
typedef int s32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

extern u8 *D_08a20fec;
void FUN_08826d60(void *state, s32 index, s32 value);
void FUN_0887ad18(void *item);
void FUN_0887af8c(void *part);

void FUN_08829db4(void)
{
    u8 *state;
    s32 i;

    D_08a20fec[0x21] = 8;
    state = D_08a20fec;
    FIELD(state, s32, 0x1c) = 0;

    for (i = 0; i < state[0x22]; i++)
    {
        FUN_08826d60(state, (u8)i, 0);
        FUN_0887ad18(D_08a20fec + 8 + i * 4);
        state = D_08a20fec;
    }

    FUN_0887af8c(state + 0x18);
}
