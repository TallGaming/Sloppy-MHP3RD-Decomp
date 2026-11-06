/*
 * FUN_0889ee28: fetch interpolation keys and evaluate the current segment.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: the near-match retains conversion-register and epilogue differences.
 */

typedef unsigned char u8;
typedef unsigned short u16;
typedef short s16;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

s16 FUN_0895c4ac(void *, u16, s16 **, s16 **, int);
float FUN_0889ed70(float, float, float, float, float, float, float);

float FUN_0889ee28(float x, u8 *track, s16 *cursor)
{
    s16 *left = 0;
    s16 *right = 0;
    float result;

    *cursor = FUN_0895c4ac(track + 8, FIELD(track, u16, 2),
                           &left, &right, *cursor);
    if (right == 0) {
        return (float)left[0];
    }
    result = FUN_0889ed70(x, (float)left[0], (float)left[1], (float)left[3],
                          (float)right[0], (float)right[1], (float)right[2]);
    return result;
}
