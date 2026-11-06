/*
 * Purpose: retain the supported call-boundary and state-update view for
 * FUN_0885a960.
 *
 * This uncompiled field view records four conditional paths over a state
 * record.  The target reads word and halfword fields, and writes word,
 * halfword, and byte fields before two direct calls.  Both calls preserve
 * incoming integer lanes two and three.  Artificial variation shows that
 * the first two inputs select four observed state-write patterns, while the first two
 * lanes at both call sites are derived from local or state values.
 *
 * The target is reached through a parameter-preserving tail wrapper, but no
 * caller establishes the two live parameter types.  FUN_0885a338 is parked
 * and FUN_0885a7ec has no independently supported complete prototype here.
 * Do not compile this view as a callable candidate.
 * A nearby peer shares the two dependencies but forwards a distinct lane
 * pattern, so it does not establish this target's missing object layout.
 */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;

typedef struct Fun0885a960StateView {
    u32 word_field;
    u16 halfword_field;
    u8 byte_field;
} Fun0885a960StateView;

typedef struct Fun0885a960CallView {
    u32 derived_lane_zero;
    u32 derived_lane_one;
    u32 forwarded_lane_two;
    u32 forwarded_lane_three;
} Fun0885a960CallView;
