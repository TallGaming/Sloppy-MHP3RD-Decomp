/*
 * FUN_088fe694: copy four shorts locally and forward them to a helper.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 * PARKED: local-array and parameter-width forms retain a different frame shape.
 */

typedef short s16;

void FUN_088fe490(void *object, int x, int y, s16 *values);

void FUN_088fe694(void *object, s16 x, s16 y, const s16 *values)
{
    s16 local[4];

    local[0] = values[0];
    local[1] = values[1];
    local[2] = values[2];
    local[3] = values[3];
    FUN_088fe490(object, x, y, local);
}
