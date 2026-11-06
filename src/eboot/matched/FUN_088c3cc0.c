/*
 * FUN_088c3cc0: choose one of two four-argument handlers from a stack flag.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 */

void FUN_08854a20(int, int, int, int);
void FUN_088543cc(int, int, int, int);

void FUN_088c3cc0(int unused, int a, int b, int c, int d, int alternate)
{
    if (alternate != 0) {
        FUN_08854a20(a, b, c, d);
        return;
    }
    FUN_088543cc(a, b, c, d);
}
