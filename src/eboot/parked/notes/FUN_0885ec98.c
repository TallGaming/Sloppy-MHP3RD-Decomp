/*
 * Purpose: retain the recovered ABI and field boundary for the call-free
 * predicate at 0x0885ec98.
 *
 * Artificial scalar probes support a boolean-like return and show that the
 * second and third input lanes are aligned object pointers.  With all-zero
 * objects, individual artificial nonzero bytes in the ranges +1..+4 and
 * +6..+11 change the predicate result in either object; setting a matching
 * byte in both objects restores the true result in the tested cases.  Changing
 * the first input object's first 64 bytes did not do so for this probe family.
 * These observations do not establish object type, complete comparison
 * semantics, or the first lane's role on all branches.
 */
typedef unsigned char u8;

typedef struct PredicateContext PredicateContext;
typedef struct PredicateRecord PredicateRecord;

/*
 * Hypothesis: this is a pure predicate comparing selected fields in two
 * records supplied in EABI integer lanes two and three.  A whole body is
 * intentionally withheld until callers establish all lane roles and the
 * record's halfword/byte field meanings.
 */
extern int FUN_0885ec98(PredicateContext *context,
                        const PredicateRecord *left,
                        const PredicateRecord *right);
