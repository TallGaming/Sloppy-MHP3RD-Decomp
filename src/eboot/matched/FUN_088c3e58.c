/*
 * FUN_088c3e58: set a full-scale channel with a reciprocal duration.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 */

void FUN_0885438c(void *object, int level, int rate);

void FUN_088c3e58(void *unused, void *object, int duration)
{
    int rate = 0x10000000;

    if (duration != 0) {
        rate /= duration;
    }
    FUN_0885438c(object, 0x7f, rate);
}
