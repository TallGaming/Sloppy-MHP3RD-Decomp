/*
 * Purpose hypothesis: newlib 1.15.0 _dtoa_r-style binary-double to decimal
 * conversion.  This is a deliberately partial readable reconstruction, not
 * a claimed bit-exact replacement.  The 0x08809074 body uses the established
 * dtoa helper cluster: _Balloc (0880d3d0), _Bfree (0880d488), __i2b,
 * __pow5mult, __lshift, __mcmp, __mdiff, and __d2b.  It also calls libgcc
 * double arithmetic helpers.  The caller at 0880ef78 selects F/e/E/g-like
 * formatting cases and passes a binary value, digit mode/count, and output
 * pointers, which independently fits _dtoa_r.
 *
 * The observed ABI updates sign and decimal-point outputs, returns a digit
 * string, and optionally stores its end through rve.  The full 5,476-byte
 * routine contains the quick floating-point estimate and multiple-precision
 * digit-generation paths; those paths are retained as unresolved rather than
 * being represented by a fake complete implementation.
 */

typedef unsigned int u32;

typedef union {
    double d;
    u32 word[2];
} DoubleWords;

/* PSP/newlib uses IEEE little-endian double words: high word is word[1]. */
#define HIGH_WORD(value) ((value).word[1])
#define LOW_WORD(value) ((value).word[0])

typedef struct Bigint Bigint;

typedef struct {
    Bigint *last_result;
    int last_result_k;
} DtoaState;

extern void FUN_0880d488(DtoaState *state, Bigint *value); /* _Bfree */

/*
 * mode 0/1 asks for a shortest round-tripping string, 2 asks for significant
 * digits, and 3 asks for fixed digits after the decimal.  Modes 4--9 select
 * slower/debug variants of 2/3 in the original dtoa implementation.
 */

/*
 * Readable prefix of _dtoa_r.  The named conversion phases below describe
 * control paths evidenced by the original helper calls, but are not expanded
 * in this partial draft.
 */
char *FUN_08809074(DtoaState *state, double value, int mode, int ndigits,
                   int *decpt, int *sign, char **rve)
{
    DoubleWords bits;
    char *digits;

    bits.d = value;

    /* _REENT_CHECK_MP and cached-result release at the entry. */
    if (state->last_result != 0) {
        FUN_0880d488(state, state->last_result);
        state->last_result = 0;
    }

    /* The original writes sign even for zero, infinities, and NaNs. */
    if ((HIGH_WORD(bits) & 0x80000000U) != 0) {
        *sign = 1;
        HIGH_WORD(bits) &= 0x7fffffffU;
    } else {
        *sign = 0;
    }

    /* Infinity/NaN is an early return with the documented decimal marker. */
    if ((HIGH_WORD(bits) & 0x7ff00000U) == 0x7ff00000U) {
        *decpt = 9999;
        digits = ((HIGH_WORD(bits) & 0x000fffffU) == 0 && LOW_WORD(bits) == 0)
                     ? "Infinity"
                     : "NaN";
        if (rve != 0)
            *rve = digits + (digits[3] != '\0' ? 8 : 3);
        return digits;
    }

    /* Zero has a one-character result and decimal position 1. */
    if ((HIGH_WORD(bits) & 0x7fffffffU) == 0 && LOW_WORD(bits) == 0) {
        *decpt = 1;
        digits = "0";
        if (rve != 0)
            *rve = digits + 1;
        return digits;
    }

    /*
     * Unresolved, evidence-backed body:
     *   1. Decode the IEEE exponent/mantissa with __d2b.
     *   2. Normalize powers of 2 and 5; obtain scale via __pow5mult.
     *   3. For eligible modes, try the floating estimate using soft-double
     *      add/subtract/multiply/divide helpers.
     *   4. Otherwise use Bigint division, __lshift, __mcmp and __mdiff to
     *      emit correctly rounded digits; cache the allocated result.
     *
     * The exact mode-dependent rounding and allocation ownership require the
     * complete dtoa.c body and are intentionally not guessed here.  In
     * particular, mode 0/1 must stop when the decimal interval round-trips,
     * while modes 2/3 stop at an ndigits-derived limit.
     */
    (void)mode;
    (void)ndigits;
    *decpt = 0;
    if (rve != 0)
        *rve = 0;
    return 0;
}
