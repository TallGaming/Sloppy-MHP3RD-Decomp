/*
 * FUN_08833ff0 predicate and state view.
 *
 * This is an uncompiled partial, not a whole-function candidate.  The
 * target reaches the verified six-byte nonzero predicate and six-byte
 * inequality predicate, branches over state reads, and returns zero in a
 * synthetic all-zero run.  Its only direct caller is a large unclassified
 * function, so incoming ABI and state-object ownership remain unresolved.
 * Artificial nonzero first-object storage takes the extended predicate path,
 * but that corroborates branch behavior only; it does not identify fields.
 * The tested second and third integer lanes did not change that synthetic
 * path, which is insufficient to declare them unused in the original ABI.
 * Each artificial nonzero byte in the first six bytes takes the extended
 * path, supporting a six-byte record at the first pointer-like input.
 */

typedef unsigned char u8;

extern int FUN_08830550(const signed char *values);
extern int FUN_088305b4(const void *left, const void *right);

struct Fun08833ff0RecordView {
    u8 key[6];
};

