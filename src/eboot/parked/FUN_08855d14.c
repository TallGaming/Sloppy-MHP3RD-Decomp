/*
 * Field and call-boundary view for FUN_08855d14.
 *
 * This is deliberately an uncompiled PARKED recovery view, not a whole
 * candidate.  The target is a nontrivial dispatcher/adapter: its recovered
 * interval contains nine direct calls, eight conditional branches, and both
 * reads and writes.  The direct-edge census identifies repeated calls to the
 * verified 8-bit-to-16-bit table helpers, alongside calls to three PARKED or
 * otherwise unclassified game functions.  Those unresolved boundaries prevent
 * a truthful callable prototype or a behavioral body at this stage.
 */

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

/* These are independently verified public source boundaries. */
extern u16 FUN_088552b4(u8 number);
extern u16 FUN_088f20f8(u8 number);

/*
 * The three incoming game edges place this routine between high-level state
 * handlers and the local 0x08855xxx helper family.  This structure records
 * only a possible caller-owned bundle, not the target ABI: no immediate call
 * site has yet reconciled forwarding, field offsets, or its return value.
 */
typedef struct FUN_08855d14_UpstreamContext {
    void *owner;
    u8 number;
    u8 reserved_05[3];
    u32 first_word;
    u32 second_word;
} FUN_08855d14_UpstreamContext;

/*
 * Direct outgoing edges with unverified callable contracts.  Do not declare
 * prototypes from this view: FUN_0885538c and FUN_088bd2d4 are explicitly
 * PARKED, and FUN_088559ac has no confirmed callee evidence.  A future
 * recovery must reconstruct each immediate call's actual arguments before a
 * C body can name or invoke these operations.
 */
typedef struct FUN_08855d14_UnresolvedEdges {
    void *to_0885538c;
    void *to_088559ac;
    void *to_088bd2d4;
} FUN_08855d14_UnresolvedEdges;
