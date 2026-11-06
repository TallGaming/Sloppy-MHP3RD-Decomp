/*
 * Purpose: preserve the supported record-update field view of FUN_0883ad4c.
 *
 * Decoder metadata and synthetic predicate cases support a four-record path:
 * the target repeats the verified six-byte inequality predicate and the
 * verified six-byte nonzero predicate, then writes a compact 32-byte result
 * group plus two shared state words.  Its sole direct caller is PARKED; a
 * synthetic caller probe reaches an unsupported unaligned object path before
 * it can prove input lanes.  An aligned target probe does show that entry
 * lanes 2 and 3 reach verified predicate-call positions, but does not prove
 * their game types or ownership.  Consequently this is an uncompiled ABI/layout
 * view, not a whole natural C candidate.
 * Artificial predicate combinations also retain non-boolean result bits on
 * one conditional path, so the return contract remains unresolved.
 */

typedef unsigned char u8;
typedef unsigned int u32;

typedef struct Fun0883ad4cResultFields {
    u32 word_00;
    u32 word_04;
    u32 word_08;
    u32 word_0c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
} Fun0883ad4cResultFields;

typedef struct Fun0883ad4cRecordView {
    u8 record[6];
} Fun0883ad4cRecordView;

extern int FUN_08830550(const signed char *values);
extern int FUN_088305b4(const void *left, const void *right);

/*
 * Supported operation shape, with unresolved input and owner types:
 * for each of four six-byte record lanes, compare records and test whether
 * the lane is nonzero before committing result words to the shared state.
 * Synthetic lane reachability supports only that incoming lanes 2 and 3
 * participate in predicate calls; it does not establish a callable signature.
 * The caller FUN_0882f2c0 needs a proved aligned layout before this becomes
 * a compilable function signature.
 */
