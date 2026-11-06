/* Purpose: form the horizontal displacement between two positions and process it. */
extern void FUN_088760b8(float *);

void FUN_08876484(const float *from, const float *to)
{
    float displacement[4];

    displacement[0] = to[0] - from[0];
    displacement[2] = to[2] - from[2];
    displacement[1] = 0.0f;
    FUN_088760b8(displacement);
}
