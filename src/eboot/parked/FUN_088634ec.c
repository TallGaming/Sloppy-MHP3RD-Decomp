/*
 * Purpose: report ready immediately, or invoke a fallback query while
 * preserving the incoming argument registers.
 * Hypothesis: the readiness fields are at offsets 0x2f544 and 0x2f548.
 */
extern unsigned int FUN_08864bd8();

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

unsigned int FUN_088634ec(const void *object)
{
    unsigned int result;
    if (FIELD(object, signed char, 0x2f544) == 0 ||
        FIELD(object, int, 0x2f548) == 0) {
        result = FUN_08864bd8();
    } else {
        result = 1;
    }
    return result;
}
