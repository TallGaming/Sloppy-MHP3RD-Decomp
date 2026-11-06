/*
 * Purpose: retain the recovered structural boundary for FUN_0885a718.
 *
 * This is an uncompiled field view.  The target conditionally executes two
 * direct dependencies and prepares four integer lanes at each site.  The
 * first site combines one derived lane with three values read from local or
 * global state.  The second combines three derived lanes with one loaded
 * value.  A byte-sized state read selects one of two observed control paths.
 *
 * The identities and declared prototypes of FUN_08859ea0 and FUN_0885a4cc
 * are not verified.  This view therefore intentionally does not manufacture
 * a callable C signature or a candidate body.
 */
typedef unsigned int u32;

typedef struct Fun0885a718CallLanes {
    u32 lane0;
    u32 lane1;
    u32 lane2;
    u32 lane3;
} Fun0885a718CallLanes;

typedef struct Fun0885a718StructuralView {
    Fun0885a718CallLanes first_dependency;
    Fun0885a718CallLanes second_dependency;
    unsigned char conditional_state;
} Fun0885a718StructuralView;
