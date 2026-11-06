/*
 * FUN_0882b234: classify a point against four directed 2D edges.
 *
 * Names and types are hypotheses unless stated. The vector component layout
 * comes from the reference accesses.
 */

typedef int s32;

s32 FUN_0882b234(void *unused, float *vertices, float *point)
{
    float v0 = vertices[0];
    float v2 = vertices[2];
    float p0 = point[0];
    float p2 = point[2];
    float v4 = vertices[4];
    float v6 = vertices[6];
    float dx = p0 - v0;
    float dz = p2 - v2;

    if (dx * (v2 - v6) - dz * (v0 - v4) < 0.0f)
        return 2;

    {
        float v5 = vertices[5];
        float v7 = vertices[7];

        if (dx * (v7 - v2) - dz * (v5 - v0) < 0.0f)
            return 2;

        {
            float v1 = vertices[1];
            float v3 = vertices[3];
            dx = p0 - v1;
            dz = p2 - v3;

            if (dx * (v6 - v3) - dz * (v4 - v1) < 0.0f)
                return 2;

            if (dx * (v3 - v7) - dz * (v1 - v5) < 0.0f)
                return 2;
        }
    }

    return 0;
}
