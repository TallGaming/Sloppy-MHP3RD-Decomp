/*
 * Purpose: preserve the caller-supported ABI view for FUN_0883bac8.
 *
 * Direct callers consistently prepare a0 and a1; several prepare a2/a3.
 * The target uses a shared local dispatch path and one unresolved game callee.
 * This declaration is intentionally not a whole-function candidate.
 */
typedef int Fun0883bac8Result;

Fun0883bac8Result FUN_0883bac8(int channel, const char *format, ...);
