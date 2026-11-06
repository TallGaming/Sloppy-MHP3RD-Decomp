/*
 * Purpose hypothesis: fdlibm scalbnf using recovered read-only constants.
 *
 * The target follows the post-2001 fdlibm macro update but retains the older
 * sf_scalbn.c ordering: it forms k + n before testing the overflow sentinel.
 * The four image constants are read-only globals so their observed HI16/LO16
 * loads remain expressible.  On target, the emitted `addu` wraps at INT_MAX;
 * the subsequent n > 50000 check routes that wrapped positive-overflow case
 * to overflow.  This C spelling retains the public source order rather than
 * adding a target-specific wrap construct.
 */
typedef int Int32;
typedef unsigned int UInt32;
typedef union FloatBits { float value; UInt32 bits; } FloatBits;

#define GET_FLOAT_WORD(word, value) do { FloatBits bits; bits.value = (value); (word) = bits.bits; } while (0)
#define SET_FLOAT_WORD(value, word) do { FloatBits bits; bits.bits = (word); (value) = bits.value; } while (0)

extern const float D_08962eec;
extern const float D_08962ef0;
extern const float D_08962ef4;
extern const float D_08962ef8;
float FUN_0880829c(float magnitude, float sign_source);

float FUN_088084c4(float value, Int32 exponent)
{
    Int32 scaled_exponent;
    Int32 raw_word;
    UInt32 magnitude;

    GET_FLOAT_WORD(raw_word, value);
    magnitude = (UInt32)raw_word & 0x7fffffff;
    scaled_exponent = magnitude >> 23;
    if (magnitude == 0) return value;
    if (magnitude > 0x7f7fffff) return value + value;
    if (magnitude <= 0x007fffff) {
        value *= D_08962eec;
        GET_FLOAT_WORD(raw_word, value);
        scaled_exponent = ((raw_word & 0x7f800000) >> 23) - 25;
        if (exponent < -50000) return D_08962ef0 * value;
    }
    scaled_exponent = scaled_exponent + exponent;
    if (scaled_exponent > 254) return D_08962ef4 * FUN_0880829c(D_08962ef4, value);
    if (scaled_exponent > 0) {
        SET_FLOAT_WORD(value, (raw_word & 0x807fffff) | (scaled_exponent << 23));
        return value;
    }
    if (scaled_exponent < -22) {
        if (exponent > 50000) return D_08962ef4 * FUN_0880829c(D_08962ef4, value);
        return D_08962ef0 * FUN_0880829c(D_08962ef0, value);
    }
    scaled_exponent += 25;
    SET_FLOAT_WORD(value, (raw_word & 0x807fffff) | (scaled_exponent << 23));
    return value * D_08962ef8;
}
