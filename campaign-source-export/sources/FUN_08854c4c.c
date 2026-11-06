/* Classify the transformed angle into the game's four direction codes. */
extern float FUN_08854abc(float angle);
extern const float D_08965ab8, D_08965abc, D_08965ac0;

unsigned int FUN_08854c4c(float angle)
{
    float transformed = FUN_08854abc(angle);

    if (transformed < D_08965ab8) {
        if (D_08965abc < transformed)
            return 0;
        return 64;
    }

    if (D_08965ac0 < transformed)
        return 192;
    return 128;
}

