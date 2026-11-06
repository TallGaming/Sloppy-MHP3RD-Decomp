/*
 * Purpose: preserve the incomplete typed interface implied by the known callee.
 * Candidate1 shows that direct Vec4 output recovery omits substantial target
 * behavior. This is an ABI view, not a complete function implementation.
 */
typedef short s16;
typedef struct { float x, y, z, w; } Vec4;
typedef struct Fun0883bf4cOutputOwner Fun0883bf4cOutputOwner;

void FUN_0883bf4c(void *context, s16 key,
                  Fun0883bf4cOutputOwner *owner, int adjustment);
