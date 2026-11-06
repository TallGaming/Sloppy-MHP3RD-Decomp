/*
 * Purpose: retain the evidence-backed interface boundary for the unresolved
 * selector resolver at 0x0885e1c8.
 *
 * The only recovered source-level caller passes its shared resolver context
 * (D_08a3345c) and a selector object here.  The target has one direct helper
 * call, but neither the selector object's layout nor the helper's ABI has
 * been independently established.  This is deliberately an uncompiled field
 * view, rather than an invented whole-function candidate.
 */
typedef unsigned char u8;

typedef struct SelectorResolverContext SelectorResolverContext;
typedef struct SelectorObject SelectorObject;
typedef struct ResolvedSelector ResolvedSelector;

/* Caller-side dataflow supports these two input object roles only. */
extern SelectorResolverContext *D_08a3345c;

/*
 * Hypothesis: the resolver returns a record whose byte at offset +1 is
 * subsequently consumed by FUN_0885f610 in FUN_08849690.  The return type,
 * field ownership, and the target's branch predicates remain unresolved.
 * Artificial scalar probes also distinguish a null first-word selector shape
 * (which returns without the direct helper) from a non-null first-word shape
 * (which reaches it); the helper's mocked return is not propagated unchanged.
 * That corroborates an indirection boundary but does not prove object layout.
 */
extern ResolvedSelector *FUN_0885e1c8(SelectorResolverContext *context,
                                      const SelectorObject *selector);
