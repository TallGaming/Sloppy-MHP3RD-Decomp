/*
 * FUN_08892680: incomplete callable-boundary view.
 *
 * The target is a 160-word integer/control-flow routine.  It has six direct
 * call sites, four to FUN_08867c30 and two to FUN_08900bf0.  Both interfaces
 * remain PARKED.  The current census has no direct caller, symbol binding, or
 * callback/table lead for this target.  This file intentionally contains no
 * candidate function and must not be compiled.
 */

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

struct FUN_08892680_unresolved_boundary {
    void *unknown_context;
    u32 unknown_state;
    u16 unknown_selector;
    u8 unknown_flag;
};
