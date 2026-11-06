/*
 * Purpose: refresh each registered handle and mark entries whose resolved
 * type is not four as state six.
 *
 * Hypothesis: the owner has a byte count at 0x22, handle words starting at
 * 0x08, and a six-byte resolver result area at 0xDA.  The resolver fills
 * result[0] while result[1] is its mode/input field.
 * Three known callers (FUN_088271ac, FUN_08827e28, and FUN_088285f4) use
 * this as a side-effecting refresh; both direct callees remain game-code
 * candidates, not identified library code.
 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef short s16;
typedef int s32;

struct Object_088270a8 {
    u8 unknown_00[8];
    s32 handles_08[6];
    u8 unknown_20[2];
    u8 handle_count_22;
    u8 selected_23;
    u8 unknown_24[0xda - 0x24];
    s16 resolver_result_da[3];
};

extern s32 FUN_0887a7e4(s32 handle, u16 *result);
extern void FUN_08826d60(void *owner, unsigned int index,
                         unsigned int new_state);

s32 FUN_088270a8(struct Object_088270a8 *owner)
{
    u16 *result = (u16 *)owner->resolver_result_da;
    s32 index;

    result[1] = 1;
    FUN_0887a7e4(-1, result);
    result[1] = 0;

    if (owner->handle_count_22 != 0) {
        index = 0;
        do {
            if (owner->handles_08[index] >= 0 &&
                FUN_0887a7e4(owner->handles_08[index], result) >= 0) {
                if ((s16)result[0] != 4) {
                    FUN_08826d60(owner, index, 6);
                    continue;
                }
            }
            index++;
        } while (index < owner->handle_count_22);
    }
    return 1;
}
