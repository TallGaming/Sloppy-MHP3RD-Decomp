/* Purpose: test a value against the active interval for one animation channel. */
int FUN_08878f8c(float value, float upper, unsigned char *state,
                 unsigned int test, int reverse)
{
    float start;
    float end;
    int wrapped;

    if ((*(int *)(state + 0x28) == 1 && (*(unsigned int *)(state + 0x40) & 1) == 0) ||
        (*(unsigned short *)(state + 0x50) & 2) != 0 || *(int *)(state + 0x48) > 0) {
        if (test > 7 || ((1U << test) & 0xc4) == 0)
            return 0;
        start = *(float *)(state + 4);
        end = start;
        wrapped = 0;
    } else if (reverse == 0) {
        start = *(float *)(state + 4);
        end = *(float *)(state + 0x14);
        {
            float next = start + *(float *)(state + 0xc);
            if (end < next && (*(unsigned short *)(state + 0x50) & 1) != 0) {
                end = *(float *)(state + 0x10);
                wrapped = 1;
            } else {
                end = next;
                wrapped = 0;
            }
        }
    } else {
        start = *(float *)(state + 8);
        end = *(float *)(state + 4);
        wrapped = start > end;
        if (!wrapped)
            end = start;
    }

    switch (test) {
    case 0:
        if (wrapped)
            return (value <= end && *(float *)(state + 0x10) <= value) || value > start;
        if (value <= start) return 0;
    case 1: case 6: return value <= end;
    case 2: return end < value;
    case 3: case 7: return end >= value && end <= upper;
    case 4: return end < value && end <= upper;
    case 5: return value <= end && end < upper;
    default: return 0;
    }
}
