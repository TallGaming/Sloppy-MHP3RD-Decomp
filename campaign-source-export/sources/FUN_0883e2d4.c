/*
 * Purpose: preserve the target's independently observed lane and dependency
 * flow without claiming a callable or compilable C implementation.
 *
 * The only declared caller is the still-ASM FUN_0884d614. Synthetic target
 * runs show a first call to FUN_0885be6c followed by two FUN_088a5644 calls,
 * six FUN_088a52b0 calls, and one FUN_088a52f8 call on the default path.
 * The second integer input lane is forwarded to FUN_0885be6c, but also
 * supplies the scalar key lane for the table helpers. This conflicts with
 * the independently supported pointer contract for FUN_0885be6c. Therefore
 * this is a field view only: it has no function body or candidate prototype.
 */

typedef unsigned char u8;

struct FUN_0883e2d4_flow_view {
    unsigned int unknown_lane0;
    unsigned int resolver_and_key_lane;
    u8 *record_lane;
};
