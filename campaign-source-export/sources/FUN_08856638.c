/*
 * Field and ABI view for FUN_08856638.
 *
 * This is intentionally an uncompiled PARKED recovery note, not a whole C
 * candidate.  The recovered interval has no calls, but it performs scalar
 * floating-point arithmetic, comparisons, conversions, float memory access,
 * and multiple early returns.  The only conservatively observed entry-slot
 * use is the second integer argument register; its pointer/scalar type and
 * every affected field remain unproved.
 */

typedef unsigned char u8;
typedef unsigned int u32;

/*
 * Five distinct callers enter this interval through both calls and tail jumps.
 * Their source-level argument forwarding and return-value use are unresolved,
 * so this is a context bundle rather than a declaration of FUN_08856638.
 */
typedef struct FUN_08856638_CallerContext {
    u32 first_integer_slot;
    u32 second_integer_slot;
} FUN_08856638_CallerContext;

/*
 * Float loads and stores establish an unresolved state object, but do not
 * prove its layout or ownership.  Artificial scalar probes saw reads outside
 * the supplied second-argument memory window, so that slot must not be
 * declared as the float-state base from this evidence.  The probes also
 * encounter a finite-only division dependency and one read/write word overlap
 * before completion; that corroborates stateful float dataflow, not fields.
 * A future candidate must recover the exact base object, offsets, integer
 * selector meaning, and all return paths from immediate call sites.
 */
typedef struct FUN_08856638_UnresolvedFloatState {
    u8 unknown_layout[1];
} FUN_08856638_UnresolvedFloatState;
