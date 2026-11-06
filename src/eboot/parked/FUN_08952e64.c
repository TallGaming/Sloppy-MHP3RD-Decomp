/* FUN_08952e64: update a wrapped vertical selection from repeat input.
 * Main EBOOT, attempt-high-01 241-512 byte batch 21. Input roles are hypotheses. */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u32 D_09bb7a70;
extern void *D_09e5e1a8;
void FUN_09c99d88(void *, int);

int FUN_08952e64(u8 *state)
{
    int count;
    u32 old;
    u32 next;
    if ((*(u16 *)(state + 0x4b18) & 0x300) != 0) {
        count = *(int *)(state + 0x4a54);
        if (count > 1) {
            old = state[0x12];
            next = old;
            if ((D_09bb7a70 & 0x100) != 0) {
                next = old == 0 ? (count - 1) & 0xff : (old - 1) & 0xff;
            } else if ((D_09bb7a70 & 0x200) != 0) {
                next = (int)old < count - 1 ? (old + 1) & 0xff : 0;
            }
            if (next != old) {
                state[0x12] = next;
                FUN_09c99d88(D_09e5e1a8, 0x16);
            }
        }
    }
    return 2;
}
