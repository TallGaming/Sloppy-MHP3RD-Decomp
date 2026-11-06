/*
 * FUN_0889ed70: evaluate a cubic Hermite interpolation segment.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: scalar float C cannot reproduce the reference VFPU interpolation.
 */

float FUN_0889ed70(float x, float p0, float x0, float m0,
                   float p1, float x1, float m1)
{
    float d = x1 - x0;
    float t = (x - x0) / d;
    float t2 = t * t;
    float t3 = t2 * t;
    float h00 = 2.0f * t3 - 3.0f * t2 + 1.0f;
    float h10 = t3 - 2.0f * t2 + t;
    float h01 = 3.0f * t2 - 2.0f * t3;
    float h11 = t3 - t2;

    return p0 * h00 + p1 * h01 + m0 * h10 + m1 * h11;
}
