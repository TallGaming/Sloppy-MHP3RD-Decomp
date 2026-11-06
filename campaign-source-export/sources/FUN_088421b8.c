/*
 * Purpose: retain the verified entry ABI and call graph for FUN_088421b8.
 *
 * The sole declared caller forwards nine EABI integer arguments.  Its second
 * argument is the literal zero.  This target directly calls the registered
 * non-empty-string predicate and FUN_088420e4.  A local Allegrex decode
 * confirms scalar control flow with two direct calls and no indirect call
 * sites.  Independent callee evidence provisionally describes FUN_088420e4
 * as a record initializer with nested storage at +0x14 and an optional tail
 * near +0x74, but its ABI remains PARKED.  The target's object layout and
 * the identity of the string operand are not yet established.  This is an
 * uncompiled partial field/ABI view, not a whole-function C candidate.
 */

typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;

/* Registered interface: implementation confirms only that s[0] is nonzero. */
extern s32 FUN_0883c4f8(const u8 *s);

/*
 * Verified from FUN_08842334's direct forwarding call.  `context` ownership
 * and the meanings of arguments three through nine remain unresolved.  It
 * is plausible, but not proved, that `context` is the initializer's record.
 */
extern u32 FUN_088421b8(u32 context, u32 required_zero, u8 third,
                        s32 fourth, s32 fifth, u8 sixth, u8 seventh,
                        u32 eighth, u32 ninth);
