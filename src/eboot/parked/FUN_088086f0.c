/*
 * Hypothesis: fdlibm-compatible powf wrapper.  The first call computes the
 * IEEE result; the remaining paths translate exceptional operands/results
 * into the runtime's standard floating-point error conventions.
 *
 * The opaque pair calls below preserve the observed ABI: the error helper
 * receives x, y, the preliminary result, and a reason code as a packed
 * record.  Their concrete runtime types are not yet recovered.
 */
typedef union FloatBits {
    float value;
    unsigned int word;
} FloatBits;

extern float FUN_08804e60(float x, float y);
extern int FUN_088084b0(float x);       /* abs(x) > infinity: NaN */
extern int FUN_088083a8(float x);       /* abs(x) <= max finite */

/* Recovered only as an ABI-level exception dispatcher. */
extern float FUN_0881c6cc(void *record, int unused);

extern int D_08962eb0; /* floating-point error-mode global; address is known */

static float standard_error(float x, float y, float z, int reason) {
    struct {
        int reason;
        int context;
        float y;
        float x;
        float result;
    } record;

    record.reason = reason;
    record.context = 0;
    record.y = y;
    record.x = x;
    record.result = z;
    return FUN_0881c6cc(&record.result, 0);
}

float FUN_088086f0(float x, float y) {
    float z = FUN_08804e60(x, y);

    /* IEEE mode, and NaN exponents, return the core result unchanged. */
    if (D_08962eb0 == -1 || FUN_088084b0(y)) {
        return z;
    }

    if (FUN_088084b0(x)) {
        if (y == 0.0f) {
            return standard_error(x, y, z, 1);
        }
        return z;
    }

    if (y == 0.0f) {
        if (x == 0.0f) {
            return standard_error(x, y, z, 2);
        }
        if (D_08962eb0 == 0) {
            return standard_error(x, y, z, 2);
        }
    }

    if (FUN_088083a8(z) && z != 0.0f) {
        return z;
    }
    if (!FUN_088083a8(y)) {
        return z;
    }
    if (!FUN_088083a8(x)) {
        return z;
    }

    if (z == 0.0f) {
        if (y < 0.0f) {
            return standard_error(x, y, z, 3);
        }
        return z;
    }

    if (FUN_088084b0(z)) {
        if (x == 0.0f) {
            return standard_error(x, y, z, 3);
        }
        return standard_error(x, y, z, 4);
    }
    return z;
}
