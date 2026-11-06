/*
 * PARKED: fdlibm-style single-precision sine entry point.
 *
 * The readable reconstruction reduces arguments through FUN_08805608 and
 * dispatches to the adjacent sine and cosine kernels. Signed float-word
 * comparisons give the reference control flow. The group-A GCC 4.0.4 output
 * is otherwise identical, but it schedules the initial mask before the low
 * half of the first threshold and restores ra before negating two results.
 * This is not sufficient evidence for a LIBRARY classification: confirm the
 * surrounding fdlibm unit before relabeling this function.
 */
typedef union {
    float f;
    int i;
} FloatWord;

extern int FUN_08805608(float x, float y[2]);
extern float FUN_08807870(float x, float y, int use_tail);
extern float FUN_08806edc(float x, float y);

float FUN_08808610(float x)
{
    FloatWord word;
    float y[2];
    int quadrant;

    word.f = x;
    word.i &= 0x7fffffff;
    if (word.i <= 0x3f490fd8) {
        return FUN_08807870(x, 0.0f, 0);
    }
    if (word.i >= 0x7f800000) {
        return x - x;
    }

    quadrant = FUN_08805608(x, y);
    switch (quadrant & 3) {
    case 0:
        return FUN_08807870(y[0], y[1], 1);
    case 1:
        return FUN_08806edc(y[0], y[1]);
    case 2:
        {
            float result = FUN_08807870(y[0], y[1], 1);
            return -result;
        }
    default:
        {
            float result = FUN_08806edc(y[0], y[1]);
            return -result;
        }
    }
}
