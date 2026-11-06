/*
 * Purpose: query an optional child object and return a signed 16-bit result.
 * Hypothesis: the child pointer is the word at parent offset 0x634.
 */
extern short FUN_0891fef8(void *parent, unsigned int value, void *child);

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

int FUN_0891ffc8(void *parent, unsigned int value)
{
    int result = -1;
    void *child = FIELD(parent, void *, 0x634);
    if (child != 0) {
        result = FUN_0891fef8(parent, value, child);
    }
    return result;
}
