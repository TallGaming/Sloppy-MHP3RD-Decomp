/* FUN_0895c4ac: locate neighboring eight-byte keyframes around a value.
 * Main EBOOT, attempt-high-01 241-512 byte batch 24. Keyframe roles are hypotheses. */
typedef unsigned int u32;

u32 FUN_0895c4ac(float value, char *table, u32 count,
                  char **lower, char **upper, short hint)
{
    int index = hint;
    char *entry;

    if (index < 0) index = 0;
    else if ((u32)index >= count) index = (short)(count - 1);
    entry = table + index * 8;
    for (;;) {
        float key = *(short *)(entry + 2);
        if (key == value) {
            *lower = entry; *upper = 0; return index;
        }
        if (key < value) {
            if (value < (float)*(short *)(entry + 10)) {
                *lower = entry; *upper = entry + 8; return index;
            }
            index = (short)(index + 1);
            if ((u32)index >= count) {
                *lower = entry; *upper = 0; return (short)(count - 1);
            }
            entry += 8;
        } else {
            index = (short)(index - 1);
            if (index < 0) {
                *lower = entry; *upper = 0; return 0;
            }
            entry -= 8;
        }
    }
}
