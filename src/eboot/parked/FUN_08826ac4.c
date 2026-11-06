/*
 * FUN_08826ac4: advance a compact four-state byte machine.
 *
 * State names and the meaning of the high flag bit are hypotheses.
 */
typedef signed char s8;
typedef unsigned char u8;

struct State08826ac4 {
    u8 unknown00[13];
    u8 state0d;
    s8 countdown0e;
};

int FUN_08826ac4(struct State08826ac4 *state)
{
    int value = state->state0d;
    u8 byte_value = (u8)value;
    int mode = byte_value;

    mode &= ~0x80;

    if (mode == 2) {
        byte_value &= ~0x7f;
        value = byte_value | 3;
        state->state0d = value;
    } else {
        if (mode < 3) {
            if (mode == 1) {
                state->state0d = mode;
                return 0;
            }
            return 0;
        }
        if (mode != 3) {
            if (mode != 4) {
                return 0;
            }
            if ((s8)byte_value < 0) {
                return 0;
            }
            {
                s8 old = state->countdown0e;
                state->countdown0e = old - 1;
                if (old < 1) {
                    state->state0d = 3;
                    state->countdown0e = 0;
                    return 1;
                }
            }
            return 0;
        }
    }
    if ((s8)value < 0) {
        return 0;
    }
    return 1;
}
