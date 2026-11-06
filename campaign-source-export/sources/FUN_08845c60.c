/*
 * Purpose: retain the verified eight-integer-lane forwarding shape of
 * FUN_08845c60 without claiming a complete source recovery.
 *
 * The direct callee rewrites its first lane and exchanges lanes one and two.
 * The target itself supplies its third outgoing lane from a derivation of its
 * second incoming lane.  The derivation constant, post-call conditional
 * halfword update, and object ownership are not yet supported.
 */
typedef int s32;
typedef unsigned short u16;

extern s32 FUN_0883e1bc(s32 unused_first, s32 second, s32 third, s32 fourth,
                        s32 fifth, s32 sixth, s32 seventh, s32 eighth);

struct FUN_08845c60_forward_lanes {
    s32 lane0;
    s32 lane1;
    s32 lane2;
    s32 lane3;
    s32 lane4;
    s32 lane5;
    s32 lane6;
    s32 lane7;
};

struct FUN_08845c60_pending_update {
    u16 value;
    u16 condition_source;
};
