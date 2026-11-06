/* Convert the transformed angle into the game's signed direction offset. */
extern float FUN_08854abc(float angle);
extern const float D_08965ac4, D_08965ac8, D_08965acc;

int FUN_08854cf4(float angle)
{
    float transformed = FUN_08854abc(angle);
    float scaled;

    if (transformed < D_08965ac4)
        scaled = transformed * D_08965ac8 / D_08965acc + D_08965ac8;
    else
        scaled = (transformed - D_08965ac4) * D_08965ac8 / D_08965ac4;
    return (int)scaled - 64;
}

