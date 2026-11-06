/*
 * FUN_08949d68: return the index of a referenced object with matching half-word 0x20.
 *
 * Main EBOOT, attempt-high-01 batch 3. The two-entry pointer array is a hypothesis.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;

int FUN_08949d68(u8 *record, s16 value)
{
    if (value >= 0) {
        void **slot = (void **)(record + 0x78);
        int index = 0;

        do {
            u8 *object = *slot;

            slot += 3;
            if (object != 0 && *(s16 *)(object + 0x20) == value)
                return (s8)index;
            index++;
        } while (index != 2);
    }
    return -1;
}
