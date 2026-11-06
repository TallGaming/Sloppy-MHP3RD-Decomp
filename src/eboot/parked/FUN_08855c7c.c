/*
 * FUN_08855c7c: populate two adjacent context fields from selector-indexed
 * tables.
 *
 * This is a typed ABI/dataflow view, not a whole matching candidate.  The
 * setter at FUN_088559ac is PARKED, so its object layout and call contract
 * remain unverified.  The observed forwarding establishes only that CONTEXT
 * is retained, FIELD_BASE has two fixed positive offsets, and SELECTOR is
 * narrowed for each 16-bit table lookup.  Both setter invocations explicitly
 * use zero for its fourth and fifth integer slots.
 */

typedef unsigned short u16;

typedef struct TargetContext TargetContext;

extern u16 FUN_088554ac(void *unused, u16 index);
extern u16 FUN_088554cc(void *unused, u16 index);

/* Hypothesis from this wrapper's argument flow; callee ABI remains PARKED. */
extern void FUN_088559ac(
    TargetContext *context, int field, u16 value, int mode, int mode_flags);

void FUN_08855c7c(TargetContext *context, int field_base, unsigned int selector)
{
    u16 first_value = FUN_088554ac(context, (u16)selector);
    FUN_088559ac(context, field_base + 39, first_value, 0, 0);

    u16 second_value = FUN_088554cc(context, (u16)selector);
    FUN_088559ac(context, field_base + 47, second_value, 0, 0);
}
