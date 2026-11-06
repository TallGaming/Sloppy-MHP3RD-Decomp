/* FUN_0895c610: locate neighboring sixteen-byte keyframes around a value.
 * Main EBOOT, attempt-high-01 241-512 byte batch 24. Keyframe roles are hypotheses. */
typedef unsigned int u32;

u32 FUN_0895c610(float value, char *table, u32 count,
                  char **lower, char **upper, short hint)
{
    int index = hint;
    char *entry;

    if (index < 0) index = 0;
    else if ((u32)index >= count) index = (short)(count - 1);
    entry = table + index * 0x10;
    for (;;) {
        float key = *(int *)(entry + 4);
        if (key == value) {
            *lower = entry; *upper = 0; return index;
        }
        if (key < value) {
            if (value < (float)*(int *)(entry + 0x14)) {
                *lower = entry; *upper = entry + 0x10; return index;
            }
            index = (short)(index + 1);
            if ((u32)index >= count) {
                *lower = entry; *upper = 0; return (short)(count - 1);
            }
            entry += 0x10;
        } else {
            index = (short)(index - 1);
            if (index < 0) {
                *lower = entry; *upper = 0; return 0;
            }
            entry -= 0x10;
        }
    }
}
