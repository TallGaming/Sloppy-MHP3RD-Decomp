/* Purpose: return the squared horizontal distance between two positions. */
float FUN_088773c8(const float *first, const float *second)
{
    float x = first[0] - second[0];
    float z = first[2] - second[2];
    return x * x + z * z;
}
