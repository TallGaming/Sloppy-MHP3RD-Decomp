/*
 * FUN_0889111c: refresh three player slots using active or inactive handlers.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: closest inline-comparison form retains six scheduling differences.
 */

typedef unsigned char u8;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

void FUN_08890600(void *, int, int, u8);
void FUN_08890d08(void *, int, int);

void FUN_0889111c(u8 *state, u8 *players, u8 value)
{
    int i = 0;

    do {
        if (players[0x81a] == 0) {
            FUN_08890600(state, i, FIELD(state, int, 8) == i, value);
        } else {
            FUN_08890d08(state, i, FIELD(state, int, 8) == i);
        }
        i++;
        players += 0x60000;
    } while (i != 3);
}
