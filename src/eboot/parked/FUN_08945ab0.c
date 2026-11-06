/* FUN_08945ab0: update a wrapped page selection from directional input.
 * Main EBOOT, attempt-high-01 241-512 byte batch 17. Input roles are hypotheses. */
typedef unsigned char u8;
typedef unsigned int u32;

extern u32 D_09bb7a68;
extern void *D_09bb7e78;

void FUN_088c926c(void *, int, int, int, int, int, int, int, int, int);

int FUN_08945ab0(u8 *state)
{
    signed char page;

    if ((signed char)state[0x20e] > 0) {
        state[0x20e] = (signed char)state[0x20e] - 1;
        return 1;
    }
    if ((D_09bb7a68 & 0x4000) != 0) {
        FUN_088c926c(D_09bb7e78, 0, 1, 0, 5, -1, -1, 0, 0, 0);
        return 0;
    }
    if ((D_09bb7a68 & 0x80) != 0 && (signed char)state[0x20d] > 1) {
        FUN_088c926c(D_09bb7e78, 0, 0x20, 0, 5, -1, -1, 0, 0, 0);
        page = (signed char)state[0x20c] - 1;
        state[0x20c] = page;
        if (page < 1) {
            state[0x20c] = state[0x20d];
        }
    }
    if ((D_09bb7a68 & 0x20) != 0 && (signed char)state[0x20d] > 1) {
        FUN_088c926c(D_09bb7e78, 0, 0x20, 0, 5, -1, -1, 0, 0, 0);
        page = (signed char)state[0x20c] + 1;
        state[0x20c] = page;
        if ((signed char)state[0x20d] < page) {
            state[0x20c] = 1;
        }
    }
    return 1;
}
