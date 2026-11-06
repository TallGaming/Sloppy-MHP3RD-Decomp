/*
 * Purpose: retain the proved predicate/return relation for FUN_08831ce4.
 * This is an uncompiled partial field view. The target returns the verified
 * six-byte predicate result and conditionally dispatches to FUN_088394dc when
 * it is nonzero. The only census caller supplies a record-shaped first slot;
 * its ultimate result use is not yet recovered. Dispatch receives a fixed selector and multiple
 * values derived from that same input record. Its callback ABI and record
 * field layout are open.
 */
typedef signed char s8;

extern int FUN_08830550(const s8 *values);

static int FUN_08831ce4_predicate_view(const s8 *six_bytes) {
    return FUN_08830550(six_bytes);
}
