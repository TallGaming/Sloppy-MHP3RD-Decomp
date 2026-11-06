/*
 * FUN_08900fc0: forward fields from an optional record to FUN_08900bf0.
 *
 * Main EBOOT, attempt-high-01. Names, record layout and types are hypotheses.
 */

typedef short s16;

void FUN_08900bf0(void *context, int a, int b, int d, int value,
                  int x, int y, int flag);

void FUN_08900fc0(void *context, int *record, int value, s16 x, s16 y)
{
    if (record == 0)
        return;
    FUN_08900bf0(context, record[0], record[1], record[3], value, x, y, 0);
}
