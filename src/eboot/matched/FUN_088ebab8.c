/*
 * FUN_088ebab8: apply FUN_088eb988 to each of seven indexed entries.
 *
 * Main EBOOT, G2 high-address frame-and-branch slice. The object role is a hypothesis.
 */

void FUN_088eb988(void *object, int index);

void FUN_088ebab8(void *object)
{
    int index = 0;

    do {
        FUN_088eb988(object, index);
        index++;
    } while (index != 7);
}
