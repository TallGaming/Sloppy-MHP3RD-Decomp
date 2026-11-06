/*
 * Purpose: retain an honest, uncompiled recovery boundary for FUN_08854edc.
 *
 * This Group B target is 356 bytes.  Verified related-wrapper evidence shows
 * that its FPR12 angle input is a binary32 result from FUN_08854abc and that
 * it returns an integer direction offset.  The precise float operation order,
 * conversion rule, and edge behavior remain unresolved.  Do not compile this
 * incomplete field view as a candidate.
 */
/* Partial semantic view only: exact rounding and special-angle behavior open. */
static float absolute_value(float value)
{
    return value < 0.0f ? -value : value;
}

static int truncate_to_int(float value)
{
    return (int)value;
}

int FUN_08854edc(float angle)
{
    float normalized_distance = absolute_value(angle - 3.1415927f) / 3.1415927f;
    return truncate_to_int(normalized_distance * 127.0f) - 64;
}
