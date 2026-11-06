/*
 * Purpose: preserve the independently observed ABI and field leads for
 * FUN_0883eb6c without pretending that this is a complete candidate.
 *
 * Caller FUN_0883eca0 forwards two opaque pointers.  The target does not
 * return a value used by either observed caller.  Its second lane agrees with
 * the verified record-pointer lane of FUN_088a52b0.  The first lane is not
 * consumed by the recovered direct-call and store paths.
 */
typedef signed char s8;
typedef unsigned char u8;
typedef unsigned short u16;

extern s8 FUN_0886d7a4(void);       /* verified: reads through D_08aace80 */
extern int FUN_088a52b0(const u8 *record, u8 value); /* PARKED callable ABI */

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

/*
 * Evidence view, deliberately not compiled as the target body:
 *
 * void FUN_0883eb6c(void *unused, u8 *record)
 * {
 *     s8 state = FUN_0886d7a4();
 *     if (!FUN_088a52b0(record, 13)) {
 *         FIELD(record, u16, 0x288) = 150;
 *         FIELD(record, u16, 0x246) = 150;
 *     }
 *     // Four membership queries use values 13, 14, 15, and 16.
 *     // The remaining branch predicates and state-dependent store rules
 *     // need branch-local provenance before this may become whole C.
 * }
 */
