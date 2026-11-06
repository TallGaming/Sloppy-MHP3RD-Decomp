/*
 * FUN_0889f098: fetch interpolation keys for a packed track and evaluate them.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: the near-match retains seven conversion/call register differences.
 */

typedef unsigned char u8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

u16 FUN_0895c610(u32, u16, u32 **, u32 **, int);
float FUN_0889ed70(float, float, float, float, float, float, float);

float FUN_0889f098(float x, u16 *track)
{
    u32 *left = 0;
    u32 *right = 0;

    track[1] = FUN_0895c610(FIELD(track, u32, 4), track[0],
                            &left, &right, (s16)track[1]);
    if (right == 0) {
        return *(float *)&left[0];
    }
    return FUN_0889ed70(x, *(float *)&left[0], (float)(int)left[1],
                        *(float *)&left[3], *(float *)&right[0],
                        (float)(int)right[1], *(float *)&right[2]);
}
