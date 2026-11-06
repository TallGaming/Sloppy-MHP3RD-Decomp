/*
 * Purpose hypothesis: fdlibm scalbnf using recovered read-only constants.
 *
 * The control flow and constants agree with public newlib 1.15.0 sf_scalbn.c.
 * The closest GCC 4.0.4 group-A draft remains non-exact; the mismatch is in
 * scheduling and local-constant materialization, not the readable algorithm.
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
    scaled_exponent += exponent;
    if (scaled_exponent > 254) return D_08962ef4 * FUN_0880829c(D_08962ef4, value);
    if (scaled_exponent > 0) {
        SET_FLOAT_WORD(value, (raw_word & 0x807fffff) | (scaled_exponent << 23));
        return value;
    }
    if (scaled_exponent <= -25) {
        if (exponent > 50000) return D_08962ef4 * FUN_0880829c(D_08962ef4, value);
        return D_08962ef0 * FUN_0880829c(D_08962ef0, value);
    }
    scaled_exponent += 25;
    SET_FLOAT_WORD(value, (raw_word & 0x807fffff) | (scaled_exponent << 23));
    return value * D_08962ef8;
}
