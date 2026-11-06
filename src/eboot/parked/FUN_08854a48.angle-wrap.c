/* Normalize a finite angle into the inclusive zero-to-turn range. */
extern const float D_08965a8c;

float FUN_08854a48(float angle)
{
    while (angle < 0.0f)
        angle += D_08965a8c;
    while (angle > D_08965a8c)
        angle -= D_08965a8c;
    return angle;
}

