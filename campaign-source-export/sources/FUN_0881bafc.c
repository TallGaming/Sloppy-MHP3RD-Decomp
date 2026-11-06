/*
 * Partial semantic view for FUN_0881bafc.
 *
 * This 908-byte non-leaf is independently identified as libgcc's soft-float
 * double-multiplication helper.  The public interface supports this signature,
 * and the private trace retains its calls, memory accesses, and control paths.
 * The exact libgcc configuration and dependent helper bindings remain
 * unproved, and the known near-match has ten scheduler differences.  This
 * declaration deliberately records only the supported ABI boundary; it is
 * uncompiled rather than an invented implementation.
 */
double __muldf3(double left, double right);
