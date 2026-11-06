/* FUN_0895335c: update a wrapped item selection from repeat input.
 * Main EBOOT, attempt-high-01 241-512 byte batch 21. Input roles are hypotheses. */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u32 D_09bb7a70;
extern u8 D_09c41270;
u8 FUN_0894af68(void *, u8);

void FUN_0895335c(u8 *state)
{
    u32 count = FUN_0894af68(state, *(&D_09c41270 + (signed char)state[4]));
    u32 old;
    u32 next;
    if ((*(u16 *)(state + 0x4b18) & 0x300) != 0 && count > 1) {
        old = state[0x14];
        next = old;
        if ((D_09bb7a70 & 0x100) != 0) {
            next = old == 0 ? (count - 1) & 0xff : (old - 1) & 0xff;
        } else if ((D_09bb7a70 & 0x200) != 0) {
            next = (int)old < (int)(count - 1) ? (old + 1) & 0xff : 0;
        }
        if (next != old) {
            state[0x14] = next;
        }
    }
}
