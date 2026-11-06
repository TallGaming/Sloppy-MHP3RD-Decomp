/*
 * Purpose: report ready immediately, or query fallback state when two object
 * fields are not both active.
 * Hypothesis: the readiness fields are at offsets 0x2f544 and 0x2f548.
 */
extern unsigned int FUN_08864b64(void);

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

unsigned int FUN_08863450(const void *object)
{
    unsigned int result = 1;
    if (FIELD(object, signed char, 0x2f544) == 0 ||
        FIELD(object, int, 0x2f548) == 0) {
        result = FUN_08864b64();
    }
    return result;
}
