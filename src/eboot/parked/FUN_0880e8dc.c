/*
 * PARKED: bounded C-string comparison.
 *
 * Hypothesis: this is an optimized strncmp-style library routine.  The
 * reference has aligned word scanning plus a byte fallback; this readable
 * form records the exact observable contract while the compiler mismatch is
 * investigated.  It returns an unsigned-byte lexical difference, stops at
 * NUL, and never reads when count is zero.
 */
typedef unsigned int u32;

int FUN_0880e8dc(const char *lhs, const char *rhs, u32 count)
{
    while (count != 0) {
        unsigned char left = (unsigned char)*lhs++;
        unsigned char right = (unsigned char)*rhs++;
        if (left != right)
            return (int)left - (int)right;
        if (left == 0)
            return 0;
        count--;
    }
    return 0;
}
