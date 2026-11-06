/*
 * Purpose: report ready immediately, or query a 16-bit identifier fallback.
 * Hypothesis: the readiness fields are at offsets 0x2f544 and 0x2f548.
 */
extern unsigned int FUN_08864b80(const void *object, unsigned short identifier);

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

unsigned int FUN_0886349c(const void *object, unsigned short identifier)
{
    unsigned int result;
    if (FIELD(object, signed char, 0x2f544) == 0 ||
        FIELD(object, int, 0x2f548) == 0) {
        result = FUN_08864b80(object, identifier);
    } else {
        result = 1;
    }
    return result;
}
