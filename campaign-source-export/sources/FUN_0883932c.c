/*
 * Purpose: retain the minimum caller/target ABI field view for a later natural
 * reconstruction of FUN_0883932c.  This is intentionally not a candidate
 * implementation: its object ownership, incoming argument count and returns
 * require further caller context.
 *
 * Evidence establishes one direct caller (FUN_088321e4), one direct call to
 * the verified six-byte record inequality predicate FUN_088305b4, and a
 * branch-heavy 256-byte target.  The predicate call proves two pointer lanes
 * at that call site, but not the public callable signature of this function.
 * A synthetic scalar run reaches exactly that call once; its surrounding
 * reads/writes do not identify the owning object or make a body safe to emit.
 */
#include <stddef.h>

extern int FUN_088305b4(const void *left, const void *right);

typedef struct FUN_0883932c_predicate_inputs {
    const void *left_record;
    const void *right_record;
} FUN_0883932c_predicate_inputs;

/* No function body: compiling a behavioral stub would conceal unresolved ABI. */
