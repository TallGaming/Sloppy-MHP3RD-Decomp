/*
 * Diagnostic reconstruction for a shared-object countdown/update routine.
 *
 * The helper ABI and scalar state updates are recovered.  D_0896c47c is an
 * unresolved absolute float reference, so this is not an integration
 * candidate: no project symbol owns that address yet.
 */
typedef signed short s16;
typedef unsigned short u16;
typedef unsigned char u8;
typedef unsigned int u32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

extern float FUN_088760f4(void *first, void *second);
extern float D_0896c47c;

int FUN_0882bac4(void *object, u32 advance)
{
    u8 *state = (u8 *)object + 0xa20;
    u8 *entry;
    float distance;
    s16 next;
    int timer;

    state[0x30] = 3;
    FIELD(state, u16, 0x32) = 15;
    if ((u8)advance != 0) {
        timer = --FIELD(state, int, 0x3c);
        if (timer <= 0) {
            state[0] = 0;
            FIELD(state, int, 0x3c) = 0;
            state[0x30] = 0;
            FIELD(state, u16, 0x34) = 0;
            return timer;
        }
        state[0] = 1;
        state[0x30] = 2;
        FIELD(state, u16, 0x34) = 15;
        return 1;
    }

    entry = (u8 *)object + 0xa30 + (FIELD(state, u32, 0x3c) << 6);
    if (entry[4] != 5 || FIELD(state, s16, 0x34) == 0)
        return 5;

    distance = FUN_088760f4((u8 *)object + 0x970, entry + 0x20)
             + FUN_088760f4((u8 *)object + 0x980, entry + 0x30);
    next = (s16)((int)(distance * D_0896c47c) + 1);
    FIELD(state, u16, 0x32) = (u16)next;
    FIELD(state, u16, 0x34) = (u16)next;
    return next;
}
