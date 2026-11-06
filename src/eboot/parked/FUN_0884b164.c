/*
 * FUN_0884b164 field and ABI view.
 *
 * Purpose: retain only the call-boundary facts that are supported by the
 * current caller/callee evidence.  This is deliberately not a candidate for
 * compilation: three of its directly called game routines remain PARKED and
 * do not have verified callable prototypes.
 */
typedef unsigned short u16;
typedef unsigned char u8;

/*
 * The incoming call from the PARKED dispatcher FUN_0891f950 uses three
 * integer lanes: a shared manager pointer, an item pointer (read there as
 * u16[]), and an int value.  The caller source is not verified enough to
 * promote this to a target prototype, but it is the current field view.
 */
struct Item_0884b164 {
    u16 id; /* Observed by the dispatcher before it transfers control. */
};

/*
 * Synthetic, fully mocked runs distinguish an all-zero item id from nonzero
 * values by the number of internal direct calls.  This confirms an integer
 * control dependency.  Changing the third input lane in the same artificial
 * case did not change that control path.  Neither fact establishes game
 * field meaning or a callable contract.
 */

/* Direct-call evidence shows these verified interfaces. */
void FUN_08867d40(void *record, u16 value);
void FUN_08867d68(void *record, u16 value);
u8 FUN_088fc0b8(void *unused, u8 index);

/*
 * The target also directly calls FUN_08900bf0, FUN_089019f4, and
 * FUN_08904570.  Their current PARKED declarations are hypotheses, not ABI
 * contracts, so this view must not declare or call them.
 *
 * Incoming control transfers are from FUN_08851da8 and FUN_0891f950.  The
 * latter is PARKED.  There is no callback/table address lead for this target.
 * The local decoder metadata reports only integer/control instructions; no
 * float object or float ABI hypothesis is retained.
 */
