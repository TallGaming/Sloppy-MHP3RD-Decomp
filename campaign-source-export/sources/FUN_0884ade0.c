/* Purpose: retain the limited real-call and object-field view for this incomplete target. */
/* This is not a whole-function candidate. */
typedef unsigned short u16;

struct Input_0884ade0 {
    u16 selector_00;
    u16 branch_value_02;
};

/* Registered C has this declaration, but its result ABI is incomplete. */
extern void FUN_08867d54(void *record, u16 value);

/*
 * Supported synthetic zero-path view: the target reads lane-1 halfword +0,
 * calls FUN_08867d54 with a zero record lane and that value.  A zero selector
 * then calls PARKED FUN_08904570 with a fixed descriptor lane and mode 10.
 * A nonzero selector reads +2 and enters calls to the other unresolved helpers.
 * Caller probes use scalar one in lane 2, not an output pointer.  Its formal
 * semantic type remains unresolved.
 */
