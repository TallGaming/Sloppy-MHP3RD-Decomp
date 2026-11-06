/*
 * Purpose: derive a direction-like vector from two object contexts, rotate
 * it, and convert the result into two packed-angle outputs.
 *
 * UNCOMPILED ABI LEDGER ONLY.  Approved Allegrex decoding establishes an
 * ordinary two-pointer entry: a0 is retained as the destination/record
 * context and a1 as the source context.  The early control values in v0/v1
 * and f1/f2 are derived from source bytes at +16/+17 and a halfword at +18;
 * they are not incoming ABI values.  No ordinary direct caller owner is
 * recovered because exact jump hits lie in an unowned analysis gap.
 *
 * The body calls known helper families for context conversion, vector setup,
 * rotation, and packed-angle output. It also directly uses VFPU scalar sine
 * and vector operations, which the fixed plain-C compiler path cannot emit.
 * Do not compile or register this ledger as a C candidate.
 */
typedef unsigned char u8;

struct Context_0882c118 {
    u8 unknown[1];
};

extern void FUN_088760f4(void);
extern void FUN_0887668c(void);
extern void FUN_08829eb4(void);
extern void FUN_08829ee0(void);
extern void FUN_08878434(void);
extern void FUN_08875bd8(void);

void FUN_0882c118_ledger(struct Context_0882c118 *first,
                          struct Context_0882c118 *second)
{
    (void)first;
    (void)second;
}
