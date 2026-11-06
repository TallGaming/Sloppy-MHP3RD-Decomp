/*
 * FUN_0891c9ec: clear the active fields of a small state record.
 *
 * Field meanings are unknown; the layout follows only the accessed offsets.
 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

struct State0891c9ec {
    u32 unknown00;
    u32 word04;
    u8 bytes08[7];
    u8 unknown0f;
    u16 half10;
    u16 half12;
};

void FUN_0891c9ec(struct State0891c9ec *state)
{
    /* Matching shape: this rotation reproduces the original store schedule. */
    state->word04 = 0;
    state->bytes08[0] = 0;
    state->bytes08[1] = 0;
    state->bytes08[2] = 0;
    state->bytes08[3] = 0;
    state->bytes08[4] = 0;
    state->bytes08[5] = 0;
    state->bytes08[6] = 0;
    state->half10 = 0;
    state->half12 = 0;
}
