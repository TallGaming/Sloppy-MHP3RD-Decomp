/*
 * FUN_0890158c: submit four coordinates and optionally emit a second five-argument operation.
 *
 * Main EBOOT, attempt-high-01 medium batch 1. Coordinate and operation meanings are hypotheses.
 */

typedef signed char s8;
typedef short s16;
void FUN_08901380(void *context, int a, int b, int c, int d);
void FUN_088eb0bc(void *manager, int a, int b, int c, int d);

void FUN_0890158c(void *context, s16 *values, int enabled)
{
    FUN_08901380(context, values[0], values[1], values[2], values[3]);
    if (enabled == 0)
        return;
    FUN_088eb0bc(*(void **)0x09be9f18, values[5],
                 (s16)(values[6] - (values[3] >> 1)),
                 (s8)values[4], enabled);
}
