/*
 * FUN_088f2420: test four 12-byte entries for type 1 or 3.
 *
 * Main EBOOT, G2 high-address branch slice. The entry layout is a hypothesis.
 */

typedef short s16;

int FUN_088f2420(s16 *entries)
{
    int remaining;

    for (remaining = 4; remaining != 0; remaining--) {
        s16 type = *entries;

        entries += 6;
        if (type == 1 || type == 3)
            return 1;
    }
    return 0;
}
