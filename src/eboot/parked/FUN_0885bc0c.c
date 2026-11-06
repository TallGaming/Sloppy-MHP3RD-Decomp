/*
 * Purpose: retain the supported selector-table call boundary for
 * FUN_0885bc0c while its target-level ABI is recovered.
 *
 * This is deliberately an uncompiled PARKED field/ABI view, not a callable
 * candidate.  The verified selector-table dependency FUN_08867d40 takes a
 * context pointer and a 16-bit selector, with its result consumed by the
 * surrounding descriptor flow.  That relationship does not prove this
 * target's own signature or the layout that owns the selector table; two of
 * its direct dependencies are also still PARKED.  The registered tail caller
 * FUN_0885be30 provides a provisional three-input boundary, but explicitly
 * marks its names and types as hypotheses, so this view preserves it without
 * promoting it to a callable declaration.  A separate PARKED caller consumes
 * the result, proving that the legacy void declaration is incomplete, while
 * still leaving the exact result type unresolved.
 */

typedef unsigned short FUN_0885bc0c_selector;
typedef unsigned char FUN_0885bc0c_byte;
typedef int FUN_0885bc0c_word;

struct FUN_0885bc0c_selector_call_boundary {
    void *resolver_context;
    FUN_0885bc0c_selector selector;
};

struct FUN_0885bc0c_provisional_entry_boundary {
    void *record;
    FUN_0885bc0c_byte kind;
    FUN_0885bc0c_word level;
};
